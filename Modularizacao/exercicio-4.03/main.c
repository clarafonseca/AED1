#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*1 ) Escrever uma função que peça ao usuário um valor, caso o valor seja menor do que zero mostre a mensagem
“Valor deverá ser maior ou igual a zero” e peça novamente um novo número.
A função só poderá retornar um valor válido.*/

/*2) Escrever uma função para retornar o valor da hipotenusa de um
triângulo retângulo dado os valores dos catetos.*/

/*3) Faça um programa principal que leia um conjunto indeterminado de valores
(cada valor correspondendo a um cateto de um triangulo retângulo) e imprima o valor da hipotenusa.
(Utilize as funções criadas nos exercícios 1 e 2) – (FLAG 0).*/

float maiorQueZero(float n);
float hipotenusaCalc(float op, float adj);

int main()
{
    setlocale(LC_ALL, "portuguese");
    float a,b,c;
    printf("Digite o valor do cateto oposto do triangulo:");
    a=maiorQueZero();
    while (a != 0)
    {
        printf("Digite o valor do cateto adjacente do triangulo:");
        b=maiorQueZero();
        if (b != 0)
        {
            c=hipotenusaCalc(a,b);
            printf("Hipotenusa: %f\n\n",c);
            printf("Digite o valor do cateto oposto do triangulo:");
            a=maiorQueZero();
        } else {
            a=0;
        }
    }

    return 0;
}

float maiorQueZero()
{
    float n;
    printf("Tente digitar novamente:");
    scanf("%f", &n);
    while( n < 0)
    {
        printf("Valor deverá ser maior ou igual a zero\n");
        printf("Tente digitar novamente:");
        scanf("%f", &n);
    }
    return n;
}

float hipotenusaCalc(float op,float adj)
{
    return (float)sqrt((pow(op,2) + pow(adj,2)));
}

