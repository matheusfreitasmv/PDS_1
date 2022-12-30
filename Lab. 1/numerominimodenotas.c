#include <stdio.h>

int main(){

    int x = 0, v1 = 0, v2 = 0, v5 = 0, v10 = 0, v20 = 0, v50 = 0, v100 = 0;

    scanf("%d", &x);
    v100 = x/100;
    v50 = (x%100)/50;
    v20 = (x%100%50)/20;
    v10 = (x%100%50%20)/10;
    v5 = (x%100%50%20%10)/5;
    v2 = (x%100%50%20%10%5)/2;
    v1 = (x%100%50%20%10%5%2)/1;

    printf("100: %d\n", v100);
    printf("50: %d\n", v50);
    printf("20: %d\n", v20);
    printf("10: %d\n", v10);
    printf("5: %d\n", v5);
    printf("2: %d\n", v2);
    printf("1: %d\n", v1);

return 0;
}
