#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int vetor[], int n){

    int i = 0;
    if(n == 0){
        return 0;
    }else{
        return soma_vetor(vetor, n-1) + vetor[n-1];
    }

}

int main(){

    int tam = 0, i = 0, soma = 0;
    scanf("%d", &tam);
    int vet[tam];
    for(i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    soma = soma_vetor(vet, tam);
    printf("%d\n", soma);

return 0;
}

