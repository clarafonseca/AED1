#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*6) Faça uma função que receba como parâmetro de entrada o código de um produto, e como parâmetro de saída irá disponibilizar
o preço da mercadoria de acordo com a tabela abaixo:*/
float loja (int cod, float preco);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int c;
    float p;
    printf("Preço: %f",loja(c,p));
    return 0;
}

float loja (int cod, float preco)
{
    printf("Digite o código do produto:");
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
        printf("Código não existente\n");
        preco = 0;
    }
    return preco;
}
