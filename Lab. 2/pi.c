/*Algoritmo para encontrar o número de iterações necessárias para aproximar o valor de M_PI(valor para pi)
utilizando a série infinita de Gregory-Leibniz, com no máximo uma diferença x. Ou seja, a diferença máxima
entre a série de Gregory e M_PI deve ser no máximo um valor x.*/

#include <stdio.h>
#include <math.h>

int main(void){

    double x = 0, pi = 0, verifi = 0, divi = 0;
    int i = 0;

    i = 1;
    pi = 4;
    divi = 3;
    verifi = pi - M_PI;
    scanf("%lf", &x);

    while(verifi >= x){
        i++;
        if(i%2 == 0){//verfica qual sinal será atribuído à sequenciação da série
            pi = pi - (4/divi);
            divi = divi + 2;
        }
        else{
            pi = pi + (4/divi);
            divi = divi + 2;
        }
        verifi = fabs(pi - M_PI);
    }

    printf("%d\n", i);

return 0;
}
