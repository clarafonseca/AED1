#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*6) Fa�a uma fun��o que receba como par�metro de entrada o c�digo de um produto, e como par�metro de sa�da ir� disponibilizar
o pre�o da mercadoria de acordo com a tabela abaixo:*/
float loja (int cod, float preco);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int c;
    float p;
    printf("Pre�o: %f",loja(c,p));
    return 0;
}

float loja (int cod, float preco)
{
    printf("Digite o c�digo do produto:");
    scanf("%d",&cod);
    switch(cod)
    {
    case 100:
        preco = 1.20;
        break;
    case 101:
        preco = 1.50;
        break;
    case 102:
        preco = 2.50;
        break;
    case 103:
        preco = 2.75;
        break;
    default:
        printf("C�digo n�o existente\n");
        preco = 0;
    }
    return preco;
}
