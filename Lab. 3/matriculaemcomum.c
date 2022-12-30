/*programa para imprimir o número de alunos matriculados nos cursos de calculo e ads simultanemanete,
tendo como identifiçao do aluno o numero da matricula*/

#include <stdio.h>

int main(void){

    int cal[1000], aeds[1000], i = 0, j = 0, ncal = 0, naeds = 0;

    scanf("%d", &naeds);

    for(i = 0; i < naeds; i++){
        scanf("%d", &aeds[i]);
    }

    scanf("%d", &ncal);

    for(i = 0; i < ncal; i++){
        scanf("%d", &cal[i]);
    }

    for(i = 0; i < naeds; i++){
        for(j = 0; j < ncal; j++){
            if(aeds[i] == cal[j]){
               printf("%d\n", cal[j]);
                break;
            }
        }
    }

return 0;
}
