#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///             INACABADO

struct agenda{
    char nome[100];
    int idade;
    char numero[20];
};

int main(){
    struct agenda a[100];
    int i = 0;
    char name[50], operacao[20];

    FILE *arq;

    gets(name);

    arq = fopen(name, "rb");
    if(name == NULL){
        printf("Erro ao abrir aqrquivo\n");
        exit(1);
    }

    while(gets(operacao) != NULL){
        printf("antes do gets\n");
        printf("operacao vale %s\n", operacao);
        if(strcmp(operacao, "inserir") == 0){
            printf("caiu em inserir\n");
            fscanf(arq, "%s", a[i].nome);
            //getchar();
            printf("nome vale %s\n", a[i].nome);
            fscanf(arq, "%d", &a[i].idade);
            getchar();
            fscanf(arq, "%d", &a[i].numero);
            getchar();
            printf("Registro %s %d %d inserido\n", a[i].nome, a[i].idade, a[i].numero);
            printf("operacao ta valendo %s\n", operacao);
        }
        else if (strcmp(operacao, "alterar") == 0){

        }
        else if(strcmp(operacao, "mostrar") == 0){

        }
        else if(strcmp(operacao, "excluir") == 0){

        }
        else{
            printf("vai sair\n");
            break;
        }

    }

return 0;
}
