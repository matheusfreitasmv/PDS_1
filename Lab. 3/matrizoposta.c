#include <stdio.h>

int main(void){

    int mat[500][500], l = 0, c = 0, i = 0, j = 0;

    scanf("%d %d", &l, &c);

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
            mat[i][j] = -(mat[i][j]);
        }
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

return 0;
}
