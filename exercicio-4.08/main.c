#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*8) Construa um método que calcule e retorne o k-ésimo termo Fibonacci. Parâmetros de entrada: a posição do termo na sequência
Fibonacci. Valor de retorno: o termo Fibonacci. Teste o método a partir de main().
*/

int fibo(int n);

int main(){
    setlocale(LC_ALL,"portuguese");
    int termo;
    printf("O termo final é %d\n", fibo(termo));

}

int fibo(int n)
{
    int a, b, auxiliar, i;
    a = 0;
    b = 1;
    printf("Digite um número: ");
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
