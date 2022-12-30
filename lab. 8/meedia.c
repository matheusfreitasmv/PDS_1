#include <stdio.h>
#include <math.h>

void Media(double *vetor, int tam, int *i){

    int k = 0;
    double media = 0, sub[tam];
    double menor = 0;

    menor = vetor[0];

    for(k = 0; k < tam; k++){
        media += vetor[k];
    }

    media = media/tam;
   // printf("media %d\n", media);

    for(k = 0; k < tam; k++){//verifica qual vetor é mais próximo da média
        sub[k] = fabs(media - vetor[k]);
        //printf("sub %d\n", sub[k]);

    }
    menor = sub[0];

    for(k = 0; k < tam; k++){
        if(sub[k] <= menor){
            menor = sub[k];
            *i = k;
        }
    }
}

int main(void){

    int t = 0, i = 0, result = 0;

    scanf("%d", &t);
    double vet[t];

    for(i = 0; i < t; i++){
        scanf("%lf", &vet[i]);
    }
    Media(vet, t, &result);

    printf("%d\n", result);

return 0;
}
