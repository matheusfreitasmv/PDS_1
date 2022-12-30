#include <stdio.h>

int main(void){

    int x = 0;

    x = 233;

    do{
        if(x > 300 && x <= 399){
            printf("%d\n", x);
            x += 3;
        }
        else{
            printf("%d\n", x);
            x += 5;
        }
    }while(x <= 457);

return 0;
}
