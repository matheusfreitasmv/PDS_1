#include <stdio.h>

/*programa para impimir uma sequência dado n, sendo que os dois primeiros números da sequêñcia serão dados.
próximos valores da sequência: Xn = (4*xn-1) - (2*xn-2)*/

int main(void){

    int n = 0, x0 = 0, x1 = 0, i = 0, xn1 = 0, xn2 = 0, valor = 0, xn = 0; //xn1 = xn-1 ; xn2 = xn-2

    scanf("%d %d %d", &n, &x0, & x1);

    printf("X0: %d\n", x0);
    printf("X1: %d\n", x1);
    xn1 = x1;
    xn2 = x0;

    for(i = 2; i <= n; i++){
        xn = (4*xn1) - (2*xn2);
        printf("X%d: %d\n", i, xn);
        valor = xn1; // permite que os valores de xn1 e xn2 sejam alterados de acordo com o problema
        xn1 = xn;
        xn2 = valor;
    }

return 0;
}
