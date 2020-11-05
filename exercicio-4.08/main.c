#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8) Construa um m�todo que calcule e retorne o k-�simo termo Fibonacci. Par�metros de entrada: a posi��o do termo na sequ�ncia
Fibonacci. Valor de retorno: o termo Fibonacci. Teste o m�todo a partir de main().
*/

int fibonacci(int n);

int main(){
    setlocale(LC_ALL,"portuguese");
    int termo;
    printf("Digite um n�mero: ");
    scanf("%d", &termo);
    printf("O %d-�simo termo fibonacci � %d\n",termo, fibonacci(termo));
}

int fibonacci(int n)
{
    int a, b, fibo, i;
    a = 0;
    b = 1;
    if (n == 1)
    {
        fibo=1;
    }
    else
    {
        for(i = 0; i < n-1; i++)
        {
            fibo = a + b;
            a = b;
            b = fibo;
        }
    }
    return fibo;
}
