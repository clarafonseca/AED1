#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*9) Construa um m�todo que calcule a potencia��o. Projete os par�metros de entrada (inteiros e positivos) e o valor de retorno.
Teste-o a partir de main(). Obs. Voc� n�o pode utilizar a fun��o pow*/

int potenciacalc(int base,int expoente);

int main() {
    int a,b;
    printf("A potencia �:",potenciacalc(a,b));
}


int potenciacalc(int base,int expoente)
{
    int i;
    int potencia=1;
    printf("Informe um numero: ");
    scanf("%d",&base);
    printf("Informe a potencia: ");
    scanf("%d",&expoente);
    for(i=0; i<expoente; i++)
    {
        potencia *= base;
        if(expoente == 0)
        {
            potencia = 1;
        }
    }
  	return potencia;
}

