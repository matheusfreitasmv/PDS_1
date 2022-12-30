#include <stdio.h>
#include <stdio.h>
#include <math.h>

struct IRIS{
    double lenght_sepala;
    double largura_sepala;
    double lenght_petala;
    double largura_petala;
    char tipo[50];
};

void classificar(struct IRIS nao_iden, struct IRIS iden[], int n){
    double result[n], imprimir = 0;
    int i = 0, posicao = 0;

    for(i = 0; i < n; i++){
        result[i] = pow(nao_iden.lenght_sepala - iden[i].lenght_sepala,2);
        result[i] += pow(nao_iden.largura_sepala - iden[i].largura_sepala,2);
        result[i] += pow(nao_iden.lenght_petala - iden[i].lenght_petala,2);
        result[i] += pow(nao_iden.largura_petala - iden[i].largura_petala,2);
        result[i] = sqrt(result[i]);
    }
    imprimir = result[0];

    for(i = 0; i < n; i++){
        if(result[i] <= imprimir){
            imprimir = result[i];
            posicao = i;
        }
    }
    printf("%s", iden[posicao].tipo);

}

int main(void){

    int n = 0, i = 0;

    scanf("%d", &n);
    struct IRIS iris[n], iris_desconhecida;

    for(i = 0; i < n; i++){
        scanf("%lf", &iris[i].lenght_sepala);
        scanf("%lf", &iris[i].largura_sepala);
        scanf("%lf", &iris[i].lenght_petala);
        scanf("%lf", &iris[i].largura_petala);
        getchar();
        fgets(iris[i].tipo, 50, stdin);
    }
    scanf("%lf", &iris_desconhecida.lenght_sepala);
    scanf("%lf", &iris_desconhecida.largura_sepala);
    scanf("%lf", &iris_desconhecida.lenght_petala);
    scanf("%lf", &iris_desconhecida.largura_petala);
    fgets(iris_desconhecida.tipo, 50, stdin);
    classificar(iris_desconhecida, iris, n);


return 0;
}
