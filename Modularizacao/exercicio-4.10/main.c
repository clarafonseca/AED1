#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*10) Elabore um procedimento para calcular o dígito verificador de um CPF.
    Deverá receber como parâmetro de entrada uma string com os 9 primeiros dígitos do cpf e deverá devolver dois
    parâmetros um com o primeiro digito e outro com o segundo digito.
    Teste o método a partir de main().*/

void verificador(char digitos[10], int *n1, int *n2);

int main()
{
    setlocale(LC_ALL,"portuguese");
    char cpfdigitos[10];
    int digito1, digito2;

    printf("Digite os primeiros 9 digitos do seu cpf: ");
    scanf("%s",cpfdigitos);

    verificador(cpfdigitos, &digito1, &digito2);
    printf("Digitos Verificadores: ");
    printf("%d%d",digito1,digito2);

    return 0;
}

void verificador(char cpf[10], int *n1, int *n2)
{
    int i,soma=0,aux=10,intcpf;
    for (i = 0; i < 9; i++){
        intcpf = cpf[i]-48;
        soma=soma+(aux*intcpf);
        aux--;
    }
    *n1= 11- (soma % 11);
    if (*n1 > 10 || *n1 == 10){
        *n1=0;
    }
    cpf[9]=*n1;

    aux=11;
    soma=0;
    for (i = 0; i < 9; i++){
        intcpf = cpf[i]-48;
        soma=soma+(aux*intcpf);
        aux--;
    }
    soma=soma+(2*cpf[9]);
    *n2= 11 - (soma % 11);
    if (*n2 > 10 || *n2 == 10){
        *n2=0;
    }
}
