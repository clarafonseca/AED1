#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8) Construa um método que calcule e retorne o k-ésimo termo Fibonacci. Parâmetros de entrada: a posição do termo na sequência
Fibonacci. Valor de retorno: o termo Fibonacci. Teste o método a partir de main().
*/

int fibonacci(int n);

int main(){
    setlocale(LC_ALL,"portuguese");
    int termo;
    printf("Digite um número: ");
    scanf("%d", &termo);
    printf("O %d-ésimo termo fibonacci é %d\n",termo, fibonacci(termo));
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
