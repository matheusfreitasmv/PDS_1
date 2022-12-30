/*Programa para ler o nome, a marca e o valor de 8 podutos. Dps imprime a quantidade n de produtos de uma marca x.
 Além disso, mostra a media total do valor dos produtos e a media do valor por marca.*/
#include <stdio.h>
#include <string.h>

struct produtos{//dupliquei cada variavel, mas os valores das variaveis "2" serão os msms valores das primeiras variáveis
    char nome[50], nome2[50], marca[50], marca2[50];
    float preco, preco2;
};

int main(void){

    struct produtos p[8];
    int i = 0, qtd_marca[8], j = 0;
    float media_total = 0, media_marcas[8];

    for(i = 0; i < 8; i++){
        scanf("%s", p[i].nome);
//        printf("%s\n", p[i].nome);
        getchar();
        scanf("%s", p[i].marca);
        scanf("%f", &p[i].preco);
        strcpy(p[i].nome2, p[i].nome);
        strcpy(p[i].marca2, p[i].marca);
        p[i].preco2 = p[i].preco;
        qtd_marca[i] = 1;//incializa a variável
        media_marcas[i] = 0;//inicializa a variável
        media_total += p[i].preco;
    }

    for(i = 0; i < 8; i++){
        for(j = i + 1; j < 8; j++){//sempre que aparecer uma marca x o segundo nome da marca passa a ser "zera"
//            printf("ta aqui\n");
            if(strcmp(p[i].marca, p[j].marca) == 0 && strcmp(p[i].marca, "zera") != 0){
//                printf("vamos la\n");
                strcpy(p[j].marca, "zera");
                qtd_marca[i] += 1;//contabiliza quantas vezes uma marca x aparece
            }
        }
        if(strcmp(p[i].marca, "zera") != 0){//printa o nome e a quantidade de produtos de uma marca x
//            printf("tem q printar \n");
            printf("%s %d\n", p[i].marca, qtd_marca[i]);
        }
    }

    media_total /= 8;
    printf("media total %.2f\n", media_total);

    for(i = 0; i < 8; i++){//a razao de ter duplicado as variaveis tá aqui!
        if(strcmp(p[i].marca, "zera") != 0){
            for(j = 0; j < 8; j++){
                if(strcmp(p[j].marca2, p[i].marca) == 0){
                    media_marcas[i] += p[j].preco2;
                }
            }
            media_marcas[i] /= qtd_marca[i];
            printf("media %s %.2f\n", p[i].marca, media_marcas[i]);
        }
    }

return 0;
}
