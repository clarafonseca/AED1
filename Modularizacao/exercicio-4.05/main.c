#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
5) Fazer um algoritmo para :
- definir uma função para determinar se um número inteiro é divisível por outro;
- ler um número indeterminado de pares de dados inteiros;
- o último par de dados será igual a (zero, zero) e não deverá ser considerado;
- usando a função, mostrar que pares lidos têm o primeiro valor divisível pelo segundo.
*/
int main()
{
    setlocale(LC_ALL,"portuguese");
    int num1,num2;
    printf("Para sair dê aos números do conjunto o valor 0\n");
    do {
    printf("\nDigite um número:");
    scanf("%d",&num1);
    printf("Digite outro número:");
    scanf("%d",&num2);
    if ((num1 % num2 == 0 )&& (num1 != 0 && num2 != 0)){
        printf("%d é divisivel por %d\n\n",num1,num2);
    }
    } while(num1 != 0 && num2 != 0);
    return 0;
}


