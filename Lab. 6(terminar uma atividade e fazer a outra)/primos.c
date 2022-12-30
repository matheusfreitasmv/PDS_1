#include <stdio.h>

long long int primo(unsigned long long int v){

    int result = 0, i = 0, divi = 0, verifi = 0;

    if(v < 2){
        result = -1;
    }
    else{
        for(i = 2; i <= v/2; i++){
//            printf("for\n");
            if(v%i == 0){
//                printf("entrou\n");
                result = 0;
                verifi = 5;
                if(v == 2){
                    result = 1;
                    verifi = 5;
                }
                break;
            }
        }

        if(verifi != 5){
            result = 1;
            printf("aqui\n");
        }
    }

    return result;
}

int main(void){

    unsigned long long int numero = 0;
    int i = 0, result[1000], j = 0;

    while(scanf("%lld", &numero) == 1){
//        scanf("%lld", &numero);
//        printf("aqui\n");
        result[i] = primo(numero);
//        printf("numero = %d\n", numero);
//        printf("result[%d] = %d\n", i, result[i]);
        i++;
    }

    for(j = 0; j < i; j++){
        if(result[j] == 1){
            printf("1\n");
        }
        else if(result[j] == 0){
            printf("0\n");
        }
        else{
            printf("-1\n");
        }
    }

return 0;
}

