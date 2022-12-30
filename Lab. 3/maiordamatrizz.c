//programa para imprimir o maior número de uma matriz

#include <stdio.h>

int main(void){

    int l = 0, c = 0, result[500], i = 0, j = 0, maior = 0, mat[1000][1000];

    scanf("%d %d", &l, &c);

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < l; i++){
        result[i] = 0;
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c - 1; j++){
            if(mat[i][j + 1] > mat[i][j]){//verifica qual o maior número em uma linha n
                result[i] = mat[i][j + 1];
            }
        }
        if(result[i] == 0){//se todos os números da linha forem iguais, result vai receber esse número
            result[i] = mat[i][1];
        }
    }

    for(i = 0; i < l - 1; i++){//verifica qual o maior valor entre os maiores valores de uma linha n
        if(result[i + 1] >= result[i]){
            maior = result[i + 1];
        }
        else{
            maior = result[i];
        }
    }

    printf("%d\n", maior);

return 0;
}
