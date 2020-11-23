#include <stdio.h>

#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i;
    for (i=2;i == -2;i--){
        printf("%d...",i);
    }
    return 0;
}
