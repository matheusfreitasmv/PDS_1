#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0, qtd_linha = 0, qtd_coluna = 0, j = 0;
    int **matriz;

    scanf("%d", &qtd_linha);
    scanf("%d", &qtd_coluna);
    matriz = (int **) malloc(sizeof(int *)*qtd_linha);
    if(matriz == NULL){
        printf("Erro: sua memoria precisa de um upgrade!!");
        exit(1);
    }
    for(i = 0; i < qtd_linha; i++){
        //printf("tem que aparecer\n");
        matriz[i] = (int *) malloc(sizeof(int)*qtd_coluna);
        if(matriz[i] == NULL){
            printf("Erro: sua memoria precisa de um upgrade!!");
            exit(1);
        }
        for(j = 0; j < qtd_coluna; j++){
            //printf("ta aqui\n");
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < qtd_linha; i++){
        for(j = 0; j < qtd_coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < qtd_linha; i++){
        free(matriz[i]);
    }
    free(matriz);

    matriz = NULL;

return 0;
}
