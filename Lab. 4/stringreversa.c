#include <stdio.h>
#include <string.h>

int main(void){

    char s1[100], revers1[100];
    int i = 0;

    fgets(s1,100,stdin);

    for(i = 0; i < strlen(s1) - 1; i++){
        revers1[i] = s1[strlen(s1)-2-i];
    }

    for(i = 0; i < strlen(s1) - 1; i++){
        printf("%c", revers1[i]);
    }

return 0;
}
