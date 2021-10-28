/*
Faça um programa em C contendo:
a. Uma função para ler uma matriz M de dimensão 8x8 para armazenar 
números inteiros, a matriz deve ser passada por parâmetro.

b. Uma função para receber duas matrizes 8x8 e retornar 1 se elas são 
iguais, e 0 caso contrário.

c. O main contendo a declaração estática de duas matrizes M1 e M2, e 
que contenha instruções para chamar a função do item a para ler M1 
e M2 respectivamente, e que possa imprimir uma frase se as matrizes 
são iguais apções executar a função do item b
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void lerMatriz(int m[8][8]){
    int c=0, i=0;
    
    for(c=0; c<8; c++){
        for(i=0; i<8; i++){
            printf("Digite um número para matriz linha %d coluna %d: ", c, i);
            scanf("%d", &m[c][i]);
        }
    }
}

int comparar(int a[8][8], int b[8][8]){
    int igual = 1, c = 0, i = 0;
    
    for(c=0; c<8; c++){
        for(i=0; i<8; i++){
        	
            if(a[c][i] != b[c][i]){
                igual = 0;
            }
            
        }
    }
    
    return igual;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int m1[8][8], m2[8][8];
    printf("\n=========Matriz 1=========\n");
    lerMatriz(m1);
    printf("\n=========Matriz 2=========\n");
    lerMatriz(m2);
    
    if(comparar(m1,m2) == 1){
        printf("\nAs duas matrizes são iguais!");
    } else {
        printf("\nAs matrizes são diferentes!");
    }
    
    return 0;
	
}
