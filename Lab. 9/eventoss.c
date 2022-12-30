#include <stdio.h>
#include <stdlib.h>

enum meses{janeiro, fevereiro, marco, abril, maio, junho, julho,
agosto, setembro, outubro, novembro, dezembro};

struct DATA{
    int dia;
    enum meses mes;
    int ano;
};

struct EVENTO{
    char nome[100];
    char local[100];
    struct DATA data;
};

void cadastrar_eventos(struct EVENTO evento[], int n){
    int i = 0;

    for(i = 0; i < n; i++){
        scanf("%s", evento[i].nome);
        getchar();
        scanf("%s", evento[i].local);
        getchar();
        scanf("%d", &evento[i].data.dia);
        scanf("%d", &evento[i].data.mes);
        scanf("%d", &evento[i].data.ano);
        getchar();
    }
}

void imprimir_eventos(struct EVENTO e[], struct DATA d, int n){
    int verifi = 0, i;

    for(i = 0; i < n; i++){
        if(e[i].data.dia == d.dia && e[i].data.mes == d.mes && e[i].data.ano == d.ano){
            printf("%s %s\n", e[i].nome, e[i].local);
            verifi = 1;
        }
    }
    if(verifi == 0){
        printf("Nenhum evento encontrado!\n");
    }

}


int main(void){

    int numero = 0, i = 0;

    scanf("%d", &numero);

    struct EVENTO evento_e[numero];

    cadastrar_eventos(evento_e, numero);

    struct DATA data;

    scanf("%d", &data.dia);
    scanf("%d", &data.mes);
    scanf("%d", &data.ano);

    imprimir_eventos(evento_e, data, numero);

return 0;
}

