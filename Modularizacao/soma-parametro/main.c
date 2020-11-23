#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int soma;
    somaCalc(&soma);
    printf("A soma é: %d\n",soma);
    return 0;
}

void somaCalc(int *soma){
    int a,b;
    printf("Digite um valor:");
    scanf("%d",&a);
    printf("Digite um valor:");
    scanf("%d",&b);
    *soma=a+b;
}
