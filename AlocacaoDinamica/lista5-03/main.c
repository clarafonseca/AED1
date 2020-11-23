#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leVetor (float *, int );
void printVetor (float *, int , char *);
void inverteVetor (float *, int);
int main()
{
    setlocale(LC_ALL,"portuguese");
    float A[20];
    int tam=20;
    leVetor(A,tam);
    printf("impressão de A conforme lido\n");
    printVetor(A,tam,"A");
    inverteVetor(A,tam);
    printf("A invertido:\n");
    printVetor(A,tam,"A");
    return 0;
}

void leVetor (float *v, int tam)
{
    int i;
    for (i=0; i<tam; i++)
    {
        printf("Digite o %d termo do vetor:",i);
        scanf("%f",&v[i]);
    }
}

void printVetor (float *v, int tam, char *nomeVetor)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%s[%d]=%.2f\n",nomeVetor,i,v[i]);
    }
}

void inverteVetor (float *v, int tam){
    int i, meio;
    float aux;
    meio = tam/2;
    for (i=0; i < meio; i = i + 1){
        aux = v[i];
        v[i] = v[tam-i-1];
        v[tam-i-1] = aux;
    }
}

