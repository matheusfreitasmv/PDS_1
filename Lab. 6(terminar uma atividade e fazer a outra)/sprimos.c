#include <stdio.h>

/// ERRO EM DOIS TESTES

void verifica_primos(int y, long long int *p2, int w){

    int  i = 0, numero = 0, j = 0, cont = 0, nao_primo = 0, numero2 = 0, loop = 0, k = 0;

    numero = 1;

    while(cont < y){
//        printf("while\n");
        numero++;
        nao_primo = 0;
        j = 2;

        for(k = 2; k < numero; k++){
//            printf("while 2\n");
            if(numero%j == 0){
                nao_primo = 1;
                loop = 1;
                if(numero == 2){
                    nao_primo = 0;
                }
                break;
            }
            j++;
        }

        if(nao_primo == 0){
            p2[i] = numero;
//            printf("p2[%d] = %lld\n",i, p2[i]);
            i++;
            cont++;
        }
    }

}

void soma_primos(int y, long long int *result2, long long int *p3, int t){

    long long int  i = 0;

    for(i = 0; i < y; i++){
        *result2 += p3[i];
    }

}

int main(void){
    long long int p[10000], result, imprimir[10000];
    int i = 0, valor = 0, contador = 0;

    result = 0;

    while(scanf("%d", &valor) == 1){
        verifica_primos(valor, p, 10000);
        soma_primos(valor, &result, p, 10000);
        imprimir[contador] = result;
//        printf("o valor e %lld\n", result);
        contador++;
        result = 0;
    }

    for(i = 0; i < contador; i++){
        printf("%lld\n", imprimir[i]);
    }
//    printf("%lld\n", p[0]);
//    printf("%lld\n", result);

return 0;
}

