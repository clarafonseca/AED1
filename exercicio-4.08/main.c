#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8) Construa um m�todo que calcule e retorne o k-�simo termo Fibonacci. Par�metros de entrada: a posi��o do termo na sequ�ncia
Fibonacci. Valor de retorno: o termo Fibonacci. Teste o m�todo a partir de main().
*/

int fibo(int n);

int main(){
    setlocale(LC_ALL,"portuguese");
    int termo;
    printf("O termo final � %d\n", fibo(termo));

}

int fibo(int n)
{
    int a, b, auxiliar, i;
    a = 0;
    b = 1;
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    if (n == 1)
    {
        auxiliar=1;
    }
    else
    {
        for(i = 0; i < n-1; i++)
        {
            auxiliar = a + b;
            a = b;
            b = auxiliar;
        }
    }
    return auxiliar;
}
