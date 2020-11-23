#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float hipcalc(float a, float b);

/*2) Escrever uma função para retornar o valor da hipotenusa de um triângulo retângulo dado os valores dos catetos.*/
int main()
{
    setlocale(LC_ALL, "portuguese");
    float op, adj, hipotenusa;
    printf("Hipotenusa: %f\n",hipcalc(op,adj));
}

float hipcalc(float a,float b){
    float hip;
    printf("Digite o valor do cateto oposto do triangulo:");
    scanf("%f",&a);
    printf("Digite o valor do cateto adjacente do triangulo:");
    scanf("%f",&b);
    hip= sqrt( (pow(a,2) + pow(b,2)) );
    return hip;
}


