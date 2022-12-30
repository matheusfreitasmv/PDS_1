#include <stdio.h>

int main(void){

    int fib[1000], x = 0, i = 0, y = 0, j = 0, cont = 0, result[1000];

    scanf("%d", &x);
    fib[0] = 0;
    fib[1] = 1;

    while(x >= 0 && x <= 1000){
        if(x >= 2){
            for(i = 2; i <= x ; i++){
                fib[i] = fib[i - 2] + fib[i - 1];
            }
            j++;
            cont++;
            result[j] = fib[i - 1];
            scanf("%d", &x);
            }
            else if(x == 1){
                j++;
                cont++;
                result[j] = 1;
                scanf("%d", &x);
            }
            else{
                j++;
                cont++;
                result[j] = 0;
                scanf("%d", &x);
            }
    }

    for(i = 1; i <= cont; i++){
        printf("%d\n", result[i]);
    }


return 0;
}
