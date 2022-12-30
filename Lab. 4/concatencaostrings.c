#include <stdio.h>
#include <string.h>

int main(void){

    char s1[100], s2[100];

    gets(s1);
    gets(s2);

    strcat(s1,s2);

    if(strlen(s1) <= 100){
        printf("%s\n", s1);
    }

return 0;
}
