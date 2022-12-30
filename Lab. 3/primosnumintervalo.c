
//programa para imprimir a quantidade de números primos entre dois números recibidos pelo usuário

#include <stdio.h>

int main(void){

    int valora = 0, sub = 0, valorb = 0, i = 0, j = 0, seq = 0, cont = 0, quant = 0;

    scanf("%d %d", &valora, &valorb);
    sub = valorb - valora;
    seq = valora;

    for(i = 0; i < sub; i++){
        seq++;
        for(j = 1; j <= seq; j++){//verifica quantos números primos há para um número n
            if(seq%j == 0){
                cont++;
            }
        }
        if(cont <= 2){//condição de determinação de um número primo(se um número possui mais de dois divisores então não é primo)
            printf("%d\n", seq);
        }
        cont = 0;//sempre zera cont para uma nova verificação
    }

return 0;
}
