#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*7) Fa�a um programa que utilize a fun��o do exerc�cio anterior. Este programa ir� pedir ao usu�rio v�rios c�digos e quantidades
dos produtos.Para cada par de valores dever� chamar a fun��o para obter o pre�o da mercadoria e devolver ao usu�rio o
valor total � ao final de todos os c�digos (flag c�digo =0) o programa dever� mostrar o valor total da compra. Obs caso o c�digo
n�o exista na tabela dever� mostrar uma mensagem de erro e pedir novo c�digo.*/

/*6) Fa�a uma fun��o que receba como par�metro de entrada o c�digo de um produto, e como par�metro de sa�da ir� disponibilizar
o pre�o da mercadoria de acordo com a tabela abaixo:*/
float loja (int cod, float preco);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int codigo, quant;
    float valor, valorfinal;
    do {
        printf("Digite o c�digo do produto:");
        scanf("%d",&codigo);
        valor = loja(codigo,valor);
        if (valor != 0){
        printf("Digite a quantidade:");
        scanf("%d",&quant);
        valorfinal= valor * quant;
        printf("O valor final � R$ %.2f\n\n",valorfinal);
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
        printf("C�digo n�o existente\n");
        preco = 0;
    }
    return preco;
}
