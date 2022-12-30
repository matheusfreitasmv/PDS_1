#include <stdio.h>
#include <stdlib.h>

void ler_vetor(int ptr[], int tamanho){
    int i = 0;

    for(i = 0; i < tamanho; i++){
        scanf("%d", &ptr[i]);
    }
}

int main(void){

    int *ponteiro_alocacao;
    int tamanho_vetor = 0, i = 0;

    scanf("%d", &tamanho_vetor);
    ponteiro_alocacao = (int *)malloc(tamanho_vetor *sizeof(int)); // cria dinamicamente um vetor de n elementos
    if(ponteiro_alocacao == NULL){
        printf("ERRO: sua memoria precisa de um upgrade!!\n");
        exit(1);
    }
    ler_vetor(ponteiro_alocacao, tamanho_vetor);
    for(i = 0; i < tamanho_vetor; i++){
        printf("%d\n", ponteiro_alocacao[i]);
    }
    free(ponteiro_alocacao);//libera a memoria
    ponteiro_alocacao = NULL;

return 0;
}
