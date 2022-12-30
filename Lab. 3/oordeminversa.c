//programa para imprimir a ordem inversa dos números lidos

#include <stdio.h>

int main(void){

    int x[10], i = 0, y[10];

    for(i = 0; i < 10; i++){
        scanf("%d", &x[i]);
        y[9 - i] = x[i];
    }

    for(i = 0; i < 10; i++){
        printf("%d\n", y[i]);
    }

return 0;
}


