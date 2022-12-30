#include <stdio.h>
#include <locale.h>

int main(void){

    int x = 0, y = 0, z = 0;

    scanf("%d %d %d", &x, &y, &z);
    setlocale(LC_ALL, "");

    if(x % y == 0 && x % z == 0){
        printf("O número é divisível\n");
    }
    else{
        printf("O número não é divisível\n");
    }

return 0;
}
