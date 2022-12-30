#include <stdio.h>
#include <stdio.h>

int fibonacci(int numero){
    int i = 0;

    if(numero == 1|| numero == 2){
        return 1;
    }else{
        return fibonacci(numero-1) + fibonacci(numero-2);
    }

}

int main(){

    int posicao_numero = 0;

    scanf("%d", &posicao_numero);
    posicao_numero = fibonacci(posicao_numero);
    printf("%d\n", posicao_numero);


return 0;
}
