//Programa para ler um arquivo texto por parâmetro e contar quantas vezes a letra 'a' aparece em uma frase/palavra
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *fp;

    char c;
    int cont = 0, i = 0;

    fp = fopen(argv[1], "r");
    if(fp == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }

    while(c != EOF){
        c = fgetc(fp);
        if(c == 'a'){
            cont++;
        }
    }

    fclose(fp);
    printf("%d\n", cont);

return 0;
}
