#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1 ) Escrever uma função que peça ao usuário um valor, caso o valor seja menor do que zero mostre a mensagem “Valor
deverá ser maior ou igual a zero” e peça novamente um novo número. A função só poderá retornar um valor válido.*/

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numero;
    printf("%d",maiorQueZero(numero));
    return 0;
}

int maiorQueZero(int n){
    printf("Digite um número  maior que zero:");
    scanf("%d", &n);
    if (n < 0){
        while( n < 0) {
            printf("Valor deverá ser maior ou igual a zero\n");
            printf("Tente digitar novamente:");
            scanf("%d", &n);
        }
    }
    return n;
}
