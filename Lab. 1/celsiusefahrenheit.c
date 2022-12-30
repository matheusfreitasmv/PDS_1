#include <stdio.h>

int main(void){

    float f = 0, c = 0, result = 0;


    scanf("%f", &c);
    f = (1.8 * c) + 32;
    result = f - (int)f;//subtrai f pela sua parte inteira

    if(result >= 0.5){//verifica para arredondamento
        result = (f - result) + 1;
        printf("%.0f\n", result);
    }
    else{
        result = (f - result);
        printf("%.0f\n", result);
    }

return 0;
}
