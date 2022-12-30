//OBS: não funciona aqui no CodeBlocks, mas no moodle funciona perfeitamente!
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fb;

    char c, str[1000];
    int cont = 0, i = 0;

    gets(str);

    fb = fopen(str, "rb");

    if(str == NULL){
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }
    while((c = fgetc(fb))!= EOF){
    //    printf("valor c = %c\n", c);
        if(c == 'a'){
            cont++;
        }
    }

    fclose(fb);
    printf("%d\n", cont);

return 0;
}
