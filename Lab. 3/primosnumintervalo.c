
//programa para imprimir a quantidade de n�meros primos entre dois n�meros recibidos pelo usu�rio

#include <stdio.h>

int main(void){

    int valora = 0, sub = 0, valorb = 0, i = 0, j = 0, seq = 0, cont = 0, quant = 0;

    scanf("%d %d", &valora, &valorb);
    sub = valorb - valora;
    seq = valora;

    for(i = 0; i < sub; i++){
        seq++;
        for(j = 1; j <= seq; j++){//verifica quantos n�meros primos h� para um n�mero n
            if(seq%j == 0){
                cont++;
            }
        }
        if(cont <= 2){//condi��o de determina��o de um n�mero primo(se um n�mero possui mais de dois divisores ent�o n�o � primo)
            printf("%d\n", seq);
        }
        cont = 0;//sempre zera cont para uma nova verifica��o
    }

return 0;
}
