#include <stdio.h>
#include <locale.h>

int main(void){

    int x = 0, y = 0, z = 0;

    scanf("%d %d %d", &x, &y, &z);
    setlocale(LC_ALL, "");

    if(x % y == 0 && x % z == 0){
        printf("O n�mero � divis�vel\n");
    }
    else{
        printf("O n�mero n�o � divis�vel\n");
    }

return 0;
}
