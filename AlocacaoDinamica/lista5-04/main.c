#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leVetor (int *, int );
void printVetor (int *, int , char *);
void inverteVetor(int *,int);

int main()
{
    setlocale(LC_ALL, "portuguese");
    int parImpar[2],A[10],tam=10,i;
    leVetor(A,tam);
    for (i=0;i<2;i++){
        parImpar[i]=0;
    }
    for (i=0;i<2;i++){
        parImpar[A[i]%2]=parImpar[A[i]%2]+1;
    }
    printVetor(parImpar,2,"parImpar");
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

void inverteVetor (int *v, int tam){
    int i, meio,aux;
    meio = tam/2;
    for (i=0; i < meio; i = i + 1){
        aux = v[i];
        v[i] = v[tam-i-1];
        v[tam-i-1] = aux;
    }
}
