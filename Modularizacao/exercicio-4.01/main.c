#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1 ) Escrever uma fun��o que pe�a ao usu�rio um valor, caso o valor seja menor do que zero mostre a mensagem �Valor
dever� ser maior ou igual a zero� e pe�a novamente um novo n�mero. A fun��o s� poder� retornar um valor v�lido.*/

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numero;
    printf("%d",maiorQueZero(numero));
    return 0;
}

int maiorQueZero(int n){
    printf("Digite um n�mero  maior que zero:");
    scanf("%d", &n);
    if (n < 0){
        while( n < 0) {
            printf("Valor dever� ser maior ou igual a zero\n");
            printf("Tente digitar novamente:");
            scanf("%d", &n);
        }
    }
    return n;
}
