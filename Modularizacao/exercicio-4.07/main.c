#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*7) Faça um programa que utilize a função do exercício anterior. Este programa irá pedir ao usuário vários códigos e quantidades
dos produtos.Para cada par de valores deverá chamar a função para obter o preço da mercadoria e devolver ao usuário o
valor total – ao final de todos os códigos (flag código =0) o programa deverá mostrar o valor total da compra. Obs caso o código
não exista na tabela deverá mostrar uma mensagem de erro e pedir novo código.*/

/*6) Faça uma função que receba como parâmetro de entrada o código de um produto, e como parâmetro de saída irá disponibilizar
o preço da mercadoria de acordo com a tabela abaixo:*/
float loja (int cod, float preco);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int codigo, quant;
    float valor, valorfinal;
    do {
        printf("Digite o código do produto:");
        scanf("%d",&codigo);
        valor = loja(codigo,valor);
        if (valor != 0){
        printf("Digite a quantidade:");
        scanf("%d",&quant);
        valorfinal= valor * quant;
        printf("O valor final é R$ %.2f\n\n",valorfinal);
        }
    } while (codigo != 0);
    return 0;
}

float loja (int cod, float preco)
{
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
