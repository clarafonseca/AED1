#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*1 ) Escrever uma fun��o que pe�a ao usu�rio um valor, caso o valor seja menor do que zero mostre a mensagem �Valor
dever� ser maior ou igual a zero� e pe�a novamente um novo n�mero. A fun��o s� poder� retornar um valor v�lido.*/

/*2) Escrever uma fun��o para retornar o valor da hipotenusa de um tri�ngulo ret�ngulo dado os valores dos catetos.*/

/*3) Fa�a um programa principal que leia um conjunto indeterminado de valores (cada valor correspondendo a um cateto de
um triangulo ret�ngulo) e imprima o valor da hipotenusa. (Utilize as fun��es criadas nos exerc�cios 1 e 2) � (FLAG 0).*/

float maiorQueZero(float n);
float hipotenusaCalc(float op, float adj);

int main()
{
    setlocale(LC_ALL, "portuguese");
    float a,b,c;
    int flag;
    printf("Digite qualquer n�mero para iniciar, e o n�mero 0 para sair\n");
    scanf("%d",&flag);
    while (flag != 0) {
        printf("Digite o valor do cateto oposto do triangulo:");
        scanf("%f",&a);
        a=maiorQueZero(a);
        printf("Digite o valor do cateto adjacente do triangulo:");
        scanf("%f",&b);
        b=maiorQueZero(b);
        c=hipotenusaCalc(a,b);
        printf("Hipotenusa: %f\n\n",c);
        printf("Digite qualquer n�mero para iniciar, e o n�mero 0 para sair\n");
        scanf("%d",&flag);
    }

    return 0;
}

float maiorQueZero(float n){
    if (n < 0){
        while( n < 0) {
            printf("Valor dever� ser maior ou igual a zero\n");
            printf("Tente digitar novamente:");
            scanf("%f", &n);
        }
    }
    return n;
}

float hipotenusaCalc(float op,float adj){
    return (float)sqrt((pow(op,2) + pow(adj,2)));
}

