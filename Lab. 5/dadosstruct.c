#include <stdio.h>
#include <string.h>

struct dados{
    char nome[50];
    unsigned int idade;
    float salario;
};

int main(void){

    struct dados d[4];
    int i = 0, j = 0, cont = 0, k = 0, idade_ausente = 0;
    char verificador[50], nome_1[50], nome_ausente[50];
    float salario_ausente = 0;

    for(i = 0; i < 100; i++){
        gets(verificador);
//        printf("Ta aqui e k = %d\n", k);
        if(strcmp(verificador, "inserir") == 0){
            if(k < 4){
//                printf("entrou\n");
                scanf("%s", d[k].nome);
                scanf("%d %f", &d[k].idade, &d[k].salario);
                printf("Registro %s %d %.2f inserido\n", d[k].nome, d[k].idade, d[k].salario);
                k++;
                getchar();
            }
            else{
                scanf("%s", nome_ausente);
                scanf("%d %f", &idade_ausente, &salario_ausente);
                getchar();
                printf("Espaco insuficiente\n");
            }
        }
        else if(strcmp(verificador, "mostrar") == 0){
            gets(nome_1);
            for(j = 0; j < k; j++){
                if(strcmp(nome_1, d[j].nome) == 0){
                    printf("Registro %s %d %.2f\n", d[j].nome, d[j].idade, d[j].salario);
                    cont = 1;
                    break;
                }
            }
            if(cont == 0){
                printf("Registro ausente\n");
            }
            cont = 0;
        }
        else{
            break;
        }
    }
//salvouuuuuuuu
return 0;
}

