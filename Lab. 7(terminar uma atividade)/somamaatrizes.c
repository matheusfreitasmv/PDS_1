//OBS: não funciona aqui no CodeBlocks, mas no moodle funciona perfeitamente!
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *sm;

    long int mat_1[5][5], mat_2[5][5], i = 0, j = 0, soma[5][5];
    char nome[100];

    gets(nome);

    sm = fopen(nome, "rb");
    if(nome == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            fscanf(sm, "%ld", &mat_1[i][j]);
            getchar();
        }
        //printf("entrou\n");
    }
    //printf("saiu\n");
    //getchar();

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            fscanf(sm,"%ld", &mat_2[i][j]);
            getchar();
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            soma[i][j] = mat_1[i][j] + mat_2[i][j];
            printf("%ld ", soma[i][j]);
        }
        printf("\n");
    }

    fclose(sm);

return 0;
}
