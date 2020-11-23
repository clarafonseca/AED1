#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Calcule o resultado da seguinte s�rie para os N primeiros termos, o valor de N dever� ser lido pelo teclado:
numerador= 1 -> a cada 2 opera��es adiciona mais 1
denominador= 2 -> a cada 1 opera��o adiciona mais 2
soma, menos, soma, menos
divisor por 4
*/
int main()
{
    setlocale(LC_ALL,"portuguese");
    int n,i,numerador,fibo=0,aux,denominador;
    float resp;
    numerador=1;
    denominador=2;
    resp=(float)numerador/denominador;
    printf("Digite o n�mero de termos:");
    scanf("%d",&n);
    for(i=1; i < n; i++)
    {
        aux= numerador+fibo;
        fibo= numerador;
        numerador= aux;

        denominador=denominador+2;

        if (denominador % 4 == 0)
        {
            resp=resp + ((float)numerador/denominador);
        }
        else
        {
            resp=resp - ((float)numerador/denominador);
        }
    }
    printf("A resposta da s�rie para %i termos �: %.2f\n",n,resp);
    return 0;
}
