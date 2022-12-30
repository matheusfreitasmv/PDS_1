//programa para imprimir o maior número primo menor que um valor x e o menor número primo maior que um valor x. (x é digitado pelo usuário)
#include <stdio.h>

void primo(int m, int *p1, int *p2){

    int v1 = 0, i = 0, loop1 = 0;
    int v2 = 0, cont = 0, verifi = 0, j = 0;

    v1 = m;
    v2 = m;
    if(m == 3){
        *p1 = 2;
        *p2 = 5;
    }else{
        for(i = 0; i < m; i++){
            v1--;
            cont = 2;
            for(j = 0 ; j < v1/2; j++){//verifica se um número é primo. caso seja, o valor de "verifi" continua sendo 0.
                if(v1%cont == 0){
                    verifi = 1;
                    break;
                }
                cont++;
            }
            if(verifi == 0){//se o número for primo quebra o laço determina o valor do ponteiro p1
                *p1 = v1;
                break;
            }
            verifi = 0;
        }

        while(loop1 != 1){
            v2++;
            cont = 2;
            for(j = 0; j < v2/2; j++){
                if(v2%cont == 0){
                    verifi = 1;
                    break;
                }
                cont++;
            }
            if(verifi == 0){
                *p2 = v2;
                loop1 = 1;
            }
            verifi = 0;
        }
    }

}

int main(void){

    int numero = 0, result1 = 0, result2 = 0;

    scanf("%d", &numero);
    primo(numero, &result1, &result2);
    printf("%d\n%d\n", result1, result2);

return 0;
}
