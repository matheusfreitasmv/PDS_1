#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[50], estado[50];
    unsigned int numero;
};

struct dados{
    char nome[50];
    unsigned int idade;
    float salario;
    struct endereco ender;
};


int main(void){
    /* OBS: as variaveis que tem o nome ausente no final não necessariamente é para dados ausentes!
    ver caso em que o comando é "alterar". */
    struct dados d[5];
    int i = 0, j = 0, cont = 0, k = 0, idade_ausente = 0, numero_ausente = 0, cont2 = 0;
    char verificador[50], nome_1[50], nome_ausente[50], rua_ausente[50], estado_ausente[50];
    float salario_ausente = 0;

    for(i = 0; i < 100; i++){
        gets(verificador);
//        printf("Ta aqui e k = %d\n", k);
        if(strcmp(verificador, "inserir") == 0){
            if(k < 5){
//                printf("entrou\n");
                scanf("%s", d[k].nome);//nome da pessoa
                scanf("%d %f", &d[k].idade, &d[k].salario);//idade e salario
                scanf("%s", d[k].ender.rua);//nome da rua
                scanf("%d", &d[k].ender.numero);//número
                scanf("%s", d[k].ender.estado);//Estado
                printf("Registro %s %d %.2f %s %d %s inserido\n", d[k].nome, d[k].idade, d[k].salario, d[k].ender.rua, d[k].ender.numero, d[k].ender.estado);
                k++;
                getchar();
            }
            else{
                scanf("%s", nome_ausente);
                scanf("%d %f", &idade_ausente, &salario_ausente);
                scanf("%s", rua_ausente);//nome da rua
                scanf("%d", &numero_ausente);//numero
                scanf("%s", estado_ausente);//Estado
                getchar();
                printf("Espaco insuficiente\n");
            }
        }
        else if(strcmp(verificador, "mostrar") == 0){
            gets(nome_1);
            for(j = 0; j < k; j++){
                if(strcmp(nome_1, d[j].nome) == 0){
                    printf("Registro %s %d %.2f %s %d %s\n", d[j].nome, d[j].idade, d[j].salario, d[j].ender.rua, d[j].ender.numero, d[j].ender.estado);
                    cont = 1;
                    break;
                }
            }
            if(cont == 0){
                printf("Registro ausente\n");
            }
            cont = 0;
        }
        else if(strcmp(verificador, "alterar") == 0){
//            printf("entrou alterar\n");
            scanf("%s", nome_ausente);
            scanf("%d %f", &idade_ausente, &salario_ausente);
            scanf("%s", rua_ausente);//nome da rua
            scanf("%d", &numero_ausente);//numero
            scanf("%s", estado_ausente);//Estado
            getchar();

            for(j = 0; j < k; j++){
                if(strcmp(nome_ausente, d[j].nome) == 0){
//                printf("agora sim pae\n");
                strcpy(d[j].nome, nome_ausente);
                d[j].idade = idade_ausente;
                d[j].salario = salario_ausente;
                strcpy(d[j].ender.rua, rua_ausente);
                d[j].ender.numero = numero_ausente;
                strcpy(d[j].ender.estado, estado_ausente);
                cont2 = 1;
                printf("Registro %s %d %.2f %s %d %s alterado\n", d[j].nome, d[j].idade, d[j].salario, d[j].ender.rua, d[j].ender.numero, d[j].ender.estado);
                break;
                }
            }
            if(cont2 == 0){
                printf("Registro ausente para alteracao\n");
            }
            cont2 = 0;
        }
        else{
            break;
        }
    }

return 0;
}

