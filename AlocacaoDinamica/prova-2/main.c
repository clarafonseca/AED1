#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void imprimeVetor(int *,int);
void ordenaVetor (int *,int);
int* geraVetor(int);
//procedimento: sem retorno (valor referencia é o valor final)
//funcao: retorna alguma coisa
//VETORES SÃO SEMPRE POR REFERENCIA
/*
Função criaVetor:
entrada: n;
saida: vetor[n] com elementos entre 01 e 15;

Procedimeto ordenaVetor:
entrada: vetor criado, n;
saida: vetor ordenado;

Main:
funcao
mostrar vetor
procedimento
mostrar vetor*/

int main()
{
    setlocale(LC_ALL, "portuguese");
    int tam=0;
    //BUSCANDO TAMANHO DO VETOR
    printf("Digite a quantidade de termos do vetor:");
    scanf("%d",&tam);

    //GERANDO MATRIZ
    int *v= geraVetor(tam);

    //IMPRIMIR DESORDENADA
    printf("Matriz desordenada:\n");
    imprimeVetor(v,tam);

    //ORDENANDO
    ordenaVetor(v,tam);

    //IMPRIMIR ORDENADA
    printf("Matriz ordenada:\n");
    imprimeVetor(v,tam);
    free(v);
    return 0;
}

int *geraVetor(int tam){
    int i;
    //GERANDO VETOR
    int *vetor = malloc(tam * sizeof(int));
    for (i=0; i<tam; i++)
    {
        vetor[i]= 1+rand()%15;
    }
    return vetor;
}

void imprimeVetor(int *vetor,int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\n",vetor[i]);
    }
}

void ordenaVetor (int *vetor,int tam)
{
    int i,j,aux;
    for (i=0; i<tam; i++)
    {
        for (j=i; j<tam; j=j+1)
        {
            if (vetor[i]>vetor[j])
            {
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
}
