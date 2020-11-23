#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*1 - Elaborar um programa que leia um vetor A com 15 elementos inteiros. Construir um vetor B do mesmo tipo, em
que cada elemento de B deva ser o resultado do fatorial correspondente de cada elemento da matriz A. Apresentar A e
B.*/

void leVetor(int *, int);
int fatorial(int);

int main()
{
    setlocale(LC_ALL, "portuguese");
    int A[15],B[15], i;
    leVetor(A,15);
    for (i=0; i<15; i++){
        B[i]=fatorial(A[i]);
    }
    printf("Tabela Fatorial:\n");
    for (i=0;i<15;i++){
        printf("  %2d -> %8d\n",A[i],B[i]);
    }
}

void leVetor(int *v, int tam){
    int i;
    for (i=0;i<tam; i=i+1){
        printf("Digite o %i termo de A: ",i);
        scanf("%d",&v[i]);
    }
}

int fatorial(int num){
    int i,fat;
    fat = 1;
    for (i=1;i<=num;i++){
        fat = fat * i;
    }
    return fat;
}
