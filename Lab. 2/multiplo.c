//Programa para imprimir os m�ltiplos de 2, 3, 5 e os m�ltiplos desses n�meros simultaneamente usando while

#include <stdio.h>
#include <locale.h>

int main(void){

    int x = 0, y = 0, multi2 = 0, multi3 = 0, multi5= 0, multiall = 0, i = 0;

    setlocale(LC_ALL, "");
    scanf("%d", &x);
    y = x - (x-1);
    i = 1;

    while(y <= x){
        if(y%2 == 0){
            multi2 += 1;
        }

        if(y%3 == 0){
            multi3 += 1;
        }

        if(y%5 == 0){
            multi5 += 1;
        }

        if(y%2 == 0 && y%3 == 0 && y%5 == 0 && y%15 == 0){
            multiall += 1;
        }

        y++;
    }

    printf("M�ltiplos de 2: %d\n", multi2);
    printf("M�ltiplos de 3: %d\n", multi3);
    printf("M�ltiplos de 5: %d\n", multi5);
    printf("M�ltiplos de todos %d\n", multiall);

return 0;
}
