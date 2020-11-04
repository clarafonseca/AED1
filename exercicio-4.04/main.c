#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
/*4) Construa um método que verifique se um ano qualquer é bissexto ou não. Projete o parâmetros de entrada (inteiro e
positivo) e o valor de retorno.
Teste-o a partir de main().
Para ser bissexto, o ano deve ser:
Divisível por 4. Não pode ser divisível por 100. Pode ser que seja divisível por 400.*/
bool anobissexto(int a);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int ano;
    bool bissex;
    bissex= anobissexto(ano);
    if (bissex){
        printf("É um ano bissexto\n");
    } else {
        printf("Não é um ano bissexto\n");
    }
}

bool anobissexto (int a){
    bool bissexto;
    printf("Digite um ano:");
    scanf("%d",&a);
    if (a % 400 == 0) {
		bissexto = true;
	}
	else if ((a % 4 == 0) && (a % 100 != 0)) {
		bissexto = true;
	}
	else {
		bissexto = false;
	}

    return bissexto;
}
