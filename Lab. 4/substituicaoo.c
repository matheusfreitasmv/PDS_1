#include <string.h>
#include<stdio.h>

int main(){

    char string[100], c1, c2;
    int i = 0;

    setbuf(stdin, NULL);
    fgets(string,100,stdin);
    scanf("%c", &c1);
    getchar();
    scanf("%c", &c2);

    for(i = 0; i < strlen(string) - 1; i++){
        if(string[i] == c1){
            string[i] = c2;
            break;
        }
    }

    printf("%s\n", string);

return 0;
}
