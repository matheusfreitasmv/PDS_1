#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
    int qtd_funcionarios;
    char nome[100];
    float salario;
    int dia, mes, ano;
    char departamento[100];
};

void ordem_alfabetica(struct dados *D, int number, int vet[], int numero){
    int i = 0, j = 0, datas = 0;
    float salario = 0;
    char string[100];

    for(i = 0; i < numero; i++){
        for(j = i+1; j < numero; j++){
            if(strcmp(D[vet[j]].nome, D[vet[i]].nome) < 0){
                strcpy(string, D[vet[j]].nome);
                strcpy(D[vet[j]].nome, D[vet[i]].nome);
                strcpy(D[vet[i]].nome, string);
                salario = D[vet[j]].salario;
                D[vet[j]].salario = D[vet[i]].salario;
                D[vet[i]].salario = salario;
                datas = D[vet[j]].dia;
                D[vet[j]].dia = D[vet[i]].dia;
                D[vet[i]].dia = datas;
                datas = D[vet[j]].mes;
                D[vet[j]].mes = D[vet[i]].mes;
                D[vet[i]].mes = datas;
                datas = D[vet[j]].ano;
                D[vet[j]].ano = D[vet[i]].ano;
                D[vet[i]].ano = datas;
                strcpy(string, D[vet[j]].departamento);
                strcpy(D[vet[j]].departamento, D[vet[i]].departamento);
                strcpy(D[vet[i]].departamento, string);
            }
        }
    }
    for(i = 0; i < numero; i++){
        printf("%s", D[vet[i]].nome);
        printf("%.2f\n", D[vet[i]].salario);
        printf("%02d/%02d/%02d\n", D[vet[i]].dia, D[vet[i]].mes, D[vet[i]].ano);
        printf("%s", D[vet[i]].departamento);
    }
}

void gerar_arquivo(struct dados *D,int tam_D, char nome_arq[], int n){

    FILE *novo_arq;

    int i = 0, j = 0, datas = 0;
    float salario = 0;
    char string[100];

    novo_arq = fopen(nome_arq, "w");
    if(novo_arq == NULL){
        printf("Erro ao abrir arquivo funcao 1\n");
        exit(1);
    }
    for(i = 0; i < tam_D; i++){//ordena os dados dos funcionarios em ordem alfabetica
         for(j = i+1; j < tam_D; j++){
            if(strcmp(D[j].nome, D[i].nome) < 0){
                strcpy(string, D[j].nome);
                strcpy(D[j].nome, D[i].nome);
                strcpy(D[i].nome, string);
                salario = D[j].salario;
                D[j].salario = D[i].salario;
                D[i].salario = salario;
                datas = D[j].dia;
                D[j].dia = D[i].dia;
                D[i].dia = datas;
                datas = D[j].mes;
                D[j].mes = D[i].mes;
                D[i].mes = datas;
                datas = D[j].ano;
                D[j].ano = D[i].ano;
                D[i].ano = datas;
                strcpy(string, D[j].departamento);
                strcpy(D[j].departamento, D[i].departamento);
                strcpy(D[i].departamento, string);
            }
        }
    }

    for(i = 0; i < tam_D; i++){
        fprintf(novo_arq, "%s", D[i].nome);
        fprintf(novo_arq, "%.2f\n", D[i].salario);
        fprintf(novo_arq, "%02d/%02d/%02d\n", D[i].dia, D[i].mes, D[i].ano);
        fprintf(novo_arq, "%s", D[i].departamento);
    }

    fclose(novo_arq);

}


void listar_por_departamento(char departa[], int qtd_departa, struct dados *d2, int qtd_2){
    int posicao[1000], i = 0, j = 0;

    strcat(departa, "\n");
    for(i = 0; i < qtd_2; i++){//verifica se determinado departamento é igual ao departamento de argv[3]
        if(strcmp(departa, d2[i].departamento) == 0){
            posicao[j] = i; //mapeia as posiçoes da struct d2 que satisfazem o objetivo desse laço
            j++;
        }
    }
    ordem_alfabetica(d2, qtd_2, posicao, j);

}

void staff_mais_old(struct dados *d3, int staff3){
    int  i = 0, j = 0, pos = 0, vet3[1000];
    int dia_aux = 0, mes_aux = 0, ano_aux = 0, cont = 0, qtd_anos_iguais = 0;
    int qtd_mes_igual = 0, qtd_dia_igual = 0;

    mes_aux = d3[0].mes;
    ano_aux = d3[0].ano;

    for(i = 0; i < staff3; i++){//encontra o valor do menor ano
        if(d3[i].ano <= ano_aux){
            ano_aux = d3[i].ano;
        }
    }
    for(i = 0; i < staff3; i++){
        if(d3[i].ano == ano_aux){
            vet3[qtd_anos_iguais] = i;//vert3 guarda a posição dos dados em que os anos sao iguais
            qtd_anos_iguais++;
        }
    }
    for(i = 0; i < qtd_anos_iguais; i++){//encontra o valor do menor mes, dos menores anos
        if(d3[vet3[i]].mes <= mes_aux){
            mes_aux = d3[vet3[i]].mes;
            qtd_mes_igual++;
        }
    }
    for(i = 0; i < qtd_mes_igual; i++){
        if(d3[vet3[i]].mes == mes_aux){
            vet3[qtd_dia_igual] = vet3[i];//vert3 guarda a posição dos dados em que os meses sao iguais, dos menores anos
            qtd_dia_igual++;
        }
    }
    dia_aux = d3[vet3[0]].dia;
    for(i = 0; i < qtd_dia_igual; i++){//encontra o valor do menor dia, dos menores anos, dos menores meses
        if(d3[vet3[i]].dia <= dia_aux){
            dia_aux = d3[vet3[i]].dia;
            pos = vet3[i];
        }
    }

    printf("%s", d3[pos].nome);
    printf("%.2f\n", d3[pos].salario);
    printf("%02d/%02d/%02d\n", d3[pos].dia, d3[pos].mes, d3[pos].ano);
    printf("%s", d3[pos].departamento);

}

void staff_mais_old_departamento(struct dados *d4, int qtd_4, char departa4[], int qtd_departa4){
    int pos[1000], i = 0, j = 0;

    strcat(departa4, "\n");
    for(i = 0; i < qtd_4; i++){//verifica se determinado departamento é igual ao departamento de argv[3]
        if(strcmp(departa4, d4[i].departamento) == 0){
            pos[j] = i; //mapeia as posiçoes da struct d4 que satisfazem o objetivo desse laço
            j++;//conta quantos departamentos sao iguais ao agrv[3]
        }
    }
    //daqui pra o final determina o funcionario mais velho do departamento
    int posicao = 0, vet3[1000];
    int dia_aux = 0, mes_aux = 0, ano_aux = 0, cont = 0, qtd_anos_iguais = 0;
    int qtd_mes_igual = 0, qtd_dia_igual = 0;

    ano_aux = d4[0].ano;

    for(i = 0; i < j; i++){//encontra o valor do menor ano
        if(d4[pos[i]].ano <= ano_aux){
            ano_aux = d4[pos[i]].ano;
        }
    }
    for(i = 0; i < j; i++){
        if(d4[pos[i]].ano == ano_aux){
            vet3[qtd_anos_iguais] = pos[i];//vert3 guarda a posição dos dados em que os anos sao iguais
            qtd_anos_iguais++;
        }
    }
    mes_aux = d4[vet3[0]].mes;
    for(i = 0; i < qtd_anos_iguais; i++){//encontra o valor do menor mes, dos menores anos
        if(d4[vet3[i]].mes <= mes_aux){
            mes_aux = d4[vet3[i]].mes;
            qtd_mes_igual++;
        }
    }
    for(i = 0; i < qtd_mes_igual; i++){
        if(d4[vet3[i]].mes == mes_aux){
            vet3[qtd_dia_igual] = vet3[i];//vert3 guarda a posição dos dados em que os meses sao iguais, dos menores anos
            qtd_dia_igual++;
        }
    }
    dia_aux = d4[vet3[0]].dia;
    for(i = 0; i < qtd_dia_igual; i++){//encontra o valor do menor dia, dos menores anos, dos menores meses
        if(d4[vet3[i]].dia <= dia_aux){
            dia_aux = d4[vet3[i]].dia;
            posicao = vet3[i];
        }
    }

    printf("%s", d4[posicao].nome);
    printf("%.2f\n", d4[posicao].salario);
    printf("%02d/%02d/%02d\n", d4[posicao].dia, d4[posicao].mes, d4[posicao].ano);
    printf("%s", d4[posicao].departamento);
}

void media_salarial(struct dados d5[], int qtd_5){
    int i = 0;
    float media = 0;

    for(i = 0; i < qtd_5; i++){
        media += d5[i].salario;
    }
    media = media/qtd_5;
    printf("%.2f\n", media);

}

void media_salarial_por_departamento(char departa6[], int qtd_departa6, struct dados *d6, int qtd_6){
    int i = 0, j = 0, vet6[1000];
    float media = 0;

    strcat(departa6, "\n");
    for(i = 0; i < qtd_6; i++){//verifica se determinado departamento é igual ao departamento de argv[3]
        if(strcmp(departa6, d6[i].departamento) == 0){
            vet6[j] = i; //mapeia as posiçoes da struct d2 que satisfazem o objetivo desse laço
            j++;
        }
    }
    for(i = 0; i < j; i++){
        media += d6[vet6[i]].salario;
    }
    media = media/j;
    printf("%.2f\n", media);

}

int main(int argc, char *argv[]){

    FILE *arq;

    int i = 0;
    struct dados d[1000];

    arq = fopen(argv[1], "r");

    if(arq == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
    fscanf(arq, "%d", &d[0].qtd_funcionarios);
    fgetc(arq);

    for(i = 0; i < d[0].qtd_funcionarios; i++){
        fgets(d[i].nome ,100, arq);
        fscanf(arq, "%f", &d[i].salario);
        fscanf(arq, "%d", &d[i].dia);
        fgetc(arq);
        fscanf(arq, "%d", &d[i].mes);
        fgetc(arq);
        fscanf(arq, "%d", &d[i].ano);
        fgetc(arq);
        fgets(d[i].departamento, 100, arq);
    }

    int executar_funcao = atoi(argv[2]);


    if(executar_funcao == 1){
        gerar_arquivo(d, d[0].qtd_funcionarios, argv[3], 100);
    }else if(executar_funcao == 2){
        listar_por_departamento(argv[3], 100, d, d[0].qtd_funcionarios);
    }else if(executar_funcao == 3){
        staff_mais_old(d, d[0].qtd_funcionarios);
    }else if(executar_funcao == 4){
        staff_mais_old_departamento(d, d[0].qtd_funcionarios, argv[3], 100);
    }else if(executar_funcao == 5){
        media_salarial(d, d[0].qtd_funcionarios);
    }else{
        media_salarial_por_departamento(argv[3], 100, d, d[0].qtd_funcionarios);
    }

    fclose(arq);

return 0;
}
