//programa para verificar se uma string � submatriz da outra
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void){

    char s1[100], sub[100];
    int tams1 = 0, tams2 = 0, i = 0, j = 0, k = 0, cont = 0, result;

    setlocale(LC_ALL, "");//permite que seja impresso palavras com acento
    fgets(s1, 100, stdin);
    fgets(sub, 100, stdin);

    tams1 = strlen(s1) - 1;//subtrai um pois vai retornar a quantidade decaractera + o \n
    tams2 = strlen(sub) - 1;

    for(i = 0; i < tams1; i++){
        if(sub[0] == s1[i]){//verifica se o primeiro caractere da submatriz � igual ao caracter n da matriz s1
            for(j = i + 1; j < tams1; j++){
                k++;
                if(sub[k] == s1[j]){//verfica os caracteres seguintes
                    cont++;//sempre que a condi��o for verdadeira cont recebe +1
                }
                else{
                    k = 0;//zera k devido aos novos casos teste
                    break;
                }
            }
        }
        if(cont == tams2 - 1){//subtrai 1 pois se entrou na condi��o que cont�m cont, ent�o 1 termo j� � igual
            printf("� substring\n");
            result = 1;//garante que, sendo verdadeira essa condi��o, a �ltima condi��o n�o ser� impressa
            break;
        }
        cont = 0;//zera cont devido aos novos casos teste
    }

    if(result == 0){
        printf("N�o � substring\n");
    }

return 0;
}
