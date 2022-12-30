#include <stdio.h>

int anobissexto(int ano_x){

    int i = 0;
    if((ano_x%4 == 0 && ano_x%100 != 0) || ano_x%400 == 0){
        i = 1;
    }

    return i;
}

int main(void){

    int ano = 0, i = 0, result[1000], recebe = 0, j = 0;

    while(scanf("%d", &ano) == 1){
        result[i] = anobissexto(ano);
        i++;
    }

    for(j = 0; j < i; j++){
        printf("%d\n", result[j]);
    }

return 0;
}
