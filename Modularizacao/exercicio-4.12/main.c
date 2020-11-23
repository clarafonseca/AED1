#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*12 - Escrever um procedimento para calcular o fatorial e uma função para calcular a soma de N parcelas : Teste a função a
partir do main()*/

int fatorial(int n);
float soma();

int main()
{
    setlocale(LC_ALL,"portuguese");
    soma();
    return 0;
}

int fatorial(int n){
    int fat;
    for(fat = 1; n > 1; n = n - 1){
        fat = fat * n;
    }
    return fat;
}

float soma (){
    int x,n,i,fatE;
    float e;
    printf("Digite o número de termos:");
    scanf("%d",&n);
    printf("Digite o valor de x:");
    scanf("%d",&x);
    for (i=0; i < n-1;i++){
       fatE = fatorial(i);
       e=e+(pow(x,i)/fatE);
    }
    printf("%f",e);
    return e;
}
