#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
5) Fazer um algoritmo para :
- definir uma fun��o para determinar se um n�mero inteiro � divis�vel por outro;
- ler um n�mero indeterminado de pares de dados inteiros;
- o �ltimo par de dados ser� igual a (zero, zero) e n�o dever� ser considerado;
- usando a fun��o, mostrar que pares lidos t�m o primeiro valor divis�vel pelo segundo.
*/
int main()
{
    setlocale(LC_ALL,"portuguese");
    int num1,num2;
    printf("Para sair d� aos n�meros do conjunto o valor 0\n");
    do {
    printf("\nDigite um n�mero:");
    scanf("%d",&num1);
    printf("Digite outro n�mero:");
    scanf("%d",&num2);
    if ((num1 % num2 == 0 )&& (num1 != 0 && num2 != 0)){
        printf("%d � divisivel por %d\n\n",num1,num2);
    }
    } while(num1 != 0 && num2 != 0);
    return 0;
}


