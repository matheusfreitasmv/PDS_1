#include <stdio.h>

int main(void){

    int x = 0, i = 0, soma = 0;

    scanf("%d", &x);

    for(i = 1; i <= x; i++){
        soma += i;
    }

    printf("%d\n", soma);

return 0;
}
