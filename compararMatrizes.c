/*
Fa�a um programa em C contendo:
a. Uma fun��o para ler uma matriz M de dimens�o 8x8 para armazenar 
n�meros inteiros, a matriz deve ser passada por par�metro.

b. Uma fun��o para receber duas matrizes 8x8 e retornar 1 se elas s�o 
iguais, e 0 caso contr�rio.

c. O main contendo a declara��o est�tica de duas matrizes M1 e M2, e 
que contenha instru��es para chamar a fun��o do item a para ler M1 
e M2 respectivamente, e que possa imprimir uma frase se as matrizes 
s�o iguais ap��es executar a fun��o do item b
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void lerMatriz(int m[8][8]){
    int c=0, i=0;
    
    for(c=0; c<8; c++){
        for(i=0; i<8; i++){
            printf("Digite um n�mero para matriz linha %d coluna %d: ", c, i);
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
        printf("\nAs duas matrizes s�o iguais!");
    } else {
        printf("\nAs matrizes s�o diferentes!");
    }
    
    return 0;
	
}
