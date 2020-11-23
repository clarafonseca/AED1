#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*11 - Faça uma função que receba como parâmetro de entrada o número de termos e o valor de x e calcule seu cosseno
utilizando a seguinte expressão: Teste a função a partir do main()*/

float cos_calc(int n,int x);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a,b;
    printf("Digite o número de termos:");
    scanf("%d",&a);
    printf("Digite o valor de x:");
    scanf("%d",&b);
    printf("Cosseno é: %f",cos_calc(a,b));
    return 0;
}

float cos_calc(int n, int x) {
    float cos;
    int i,fat,pares;
    pares=2;
    cos= 1 - (pow(x,pares)/pares);
    for (i=0; i < n-1;i++){
        pares+=2;
        for(fat = 1; pares > 1; pares= pares - 1){
            fat = fat * pares;
        }
        if (pares % 4 == 0){
            cos=cos+(pow(x,pares)/fat);
        } else {
            cos=cos-(pow(x,pares)/fat);
        }
    }
    return cos;
}
