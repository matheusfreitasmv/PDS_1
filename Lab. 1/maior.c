#include <stdio.h>

int main(void){

    int v1 = 0, v2 = 0, v3 = 0;

    scanf("%d %d %d", &v1, &v2, &v3);

    if(v1 > v2 && v1 > v3){
        printf("%d\n", v1);
    }
    else if(v2 > v1 && v2 > v3){
        printf("%d\n", v2);
    }
    else if(v1 == v2 && v3 > v1){
        printf("%d\n", v3);
    }
    else if(v1 == v2 && v3 < v1){
        printf("%d\n", v1);
    }
    else if(v1 == v3 && v2 > v1){
        printf("%d", v2);
    }
    else if(v1 == v3 && v2 < v1){
        printf("%d", v1);
    }
    else if(v2 == v3 && v1 > v3){
        printf("%d", v1);
    }
    else if(v2 == v3 && v1 < v3){
        printf("%d", v2);
    }
    else{
      printf("%d\n", v3);
    }

return 0;
}
