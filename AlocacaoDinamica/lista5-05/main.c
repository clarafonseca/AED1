#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*5 - Elaborar um programa que preencha com valores aleatórios 10 elementos do tipo inteiro em um vetor A. Ordene e
imprima o vetor A.*/

void leVetor (int *, int );
void printVetor (int *, int , char *);
void classificacao(int *,int);

int main()
{
    setlocale(LC_ALL, "portuguese");
    int A[10],tam=10;
    leVetor(A,tam);
    classificacao(A,tam);
    printf("Valores Ordenados:\n");
    printVetor(A,tam,"A");
    return 0;
}

void leVetor (int *v, int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        printf("Digite o %d termo do vetor:",i);
        scanf("%d",&v[i]);
    }
}

void printVetor (int *v, int tam, char *nomeVetor)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%s[%d]=%d\n",nomeVetor,i,v[i]);
    }
}

void classificacao(int *v, int tam){
    int i,j,aux;
    for (i=0;i<tam;i++){
        for (j=i;j<tam;j=j+1){
            if (v[i]>v[j]){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }
        }
    }
}
