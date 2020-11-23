#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Calcule o resultado da seguinte série para os N primeiros termos, o valor de N deverá ser lido pelo teclado:
numerador= 1 -> a cada 2 operações adiciona mais 1
denominador= 2 -> a cada 1 operação adiciona mais 2
soma, menos, soma, menos
divisor por 4
*/
void termos(int, float *resp);

int main()
{
    int n;
    float resposta;
    setlocale(LC_ALL,"portuguese");
    printf("Digite o número de termos:");
    scanf("%d",&n);
    termos(n,&resposta);
    printf("A resposta da série para %i termos é: %.2f\n",n,resposta);
    return 0;
}

void termos(int num,float *resp){
    int i,numerador=1,fibo=0,aux,denominador=2;
    *resp=(float)numerador/denominador;
    for(i=1; i < num; i++)
    {
        aux= numerador+fibo;
        fibo= numerador;
        numerador= aux;

        denominador=denominador+2;

        if (denominador % 4 == 0)
        {
            *resp=*resp + ((float)numerador/denominador);
        }
        else
        {
            *resp=*resp - ((float)numerador/denominador);
        }
    }
}
