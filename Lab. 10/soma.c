#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int vet1[], int qtd1, int vet2[], int qtd2, int soma[], int qtd3){
    int i = 0;

    for(i = 0; i < qtd1; i++){
        soma[i] = vet1[i] + vet2[i];
    }
}

int main(){

    int *v1, *v2, *v_result;
    int i = 0, tamanho = 0;

    scanf("%d", &tamanho);

    v1 = (int *) malloc(tamanho*sizeof(int));
    v2 = (int *) malloc(tamanho*sizeof(int));
    v_result = (int *) malloc(tamanho*sizeof(int));

    if(v1 == NULL || v2 == NULL || v_result == NULL){
        printf("ERRO: sua memoria precisa de um upgrade!!");
        exit(0);
    }
    for(i = 0; i < tamanho; i++){
        scanf("%d", &v1[i]);
    }
    for(i = 0; i < tamanho; i++){
        scanf("%d", &v2[i]);
    }
    soma_vetores(v1,tamanho, v2, tamanho, v_result, tamanho);
    for(i = 0; i < tamanho; i++){
        printf("%d\n", v_result[i]);
    }
    free(v1);
    free(v2);
    free(v_result);
    v1 = NULL;
    v2 = NULL;
    v_result = NULL;

return 0;
}
