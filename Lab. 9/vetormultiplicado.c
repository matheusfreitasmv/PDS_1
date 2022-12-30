#include <stdio.h>
#include <stdlib.h>

void imprime(int vetor[], int n){
    int i = 0;

    for(i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void multiplica(int vetor[], int n, double v){
    int i = 0;

    for(i = 0; i < n; i++){
        vetor[i] = vetor[i] * v;
    }
}

int main(void){

    int tamanho_vet = 0, i = 0;
    double valor_multiplica = 0;

    scanf("%d", &tamanho_vet);
    int vet[tamanho_vet];

    for(i = 0; i < tamanho_vet; i++){
        scanf("%d", &vet[i]);
    }
    scanf("%lf", &valor_multiplica);
    imprime(vet, tamanho_vet);
    multiplica(vet, tamanho_vet, valor_multiplica);
    imprime(vet, tamanho_vet);
    multiplica(vet, tamanho_vet, 1/valor_multiplica);
    imprime(vet, tamanho_vet);

return 0;
}
