#include <stdio.h>

int main(void){

    int qtjogo = 0, i = 0, j = 0, k = 0, verifica = 0, define[15];

    scanf("%d", &qtjogo);
    int result[qtjogo], quantidadex[qtjogo];

    for(k = 0; k < qtjogo; k++){
        int tt = 0, qtd_x = 0; //tt = tamanho do tabuleiro
        scanf("%d", &tt);
        getchar();
//        printf("tt %d\n", tt);
        char con[tt][tt];//con = conteudo do tabuleiro

        for(i = 0; i < tt; i++){//define o conteudo do tabuleiro
            for(j = 0; j < tt; j++){
                scanf("%c", &con[i][j]);
                getchar();
//                printf("con %c\n", con[i][j]);
                if(con[i][j] == 'x'){
                    qtd_x++;
                }
            }
        }
//      printf("saiu\n");
//        printf("qtdx %d\n", qtd_x);

        int jog = 0, vazio = 0; //jog = numero de jogadas
        scanf("%d", &jog);
//        printf("jog = %d\n", jog);
        int l[jog], c[jog];//posição da linha e da coluna do tabuleiro a ser escolhida

        for(i = 0; i < jog; i++){// valores referentes as linhas e as colunas de cada jogada jogada;
            scanf("%d %d", &l[i], &c[i]);
        }
//        printf(" jog %d\n", jog);
//        printf("%c\n", con[0][0]);

        for(i = 0; i < jog; i++){
            if(con[l[i]][c[i]] != 'b'){
                if(l[i] == tt-1 && c[i] == tt-1 && con[l[i]][c[i]-1] != 'b' && con[l[i]-1][c[i]] != 'b' && con[l[i]-1][c[i]-1] != 'b'){//verifica os quadrados adjacentes no canto inferior direito
                    vazio += 4;
//                    printf("inferior direito\n");

                    if(con[l[i]][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]-1] = '*';
                    }
                    if(con[l[i]-1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]] = '*';
                    }
                    if(con[l[i]-1][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]-1] = '*';
                    }
                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]] == '*';
                    }
                }
                else if(l[i] == tt-tt && c[i] == tt-tt  && con[l[i]][c[i]+1] != 'b' && con[l[i]+1][c[i]] != 'b' && con[l[i]+1][c[i]+1] != 'b'){//verifica os quadrados adjacentes no canto superior esquerdo
                    vazio += 4;
//                    printf("superior esquerdo\n");

                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]] = '*';
                    }
                    if(con[l[i]][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]+1] = '*';
                    }
                    if(con[l[i]+1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]] = '*';
                    }
                    if(con[l[i]+1][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]+1] = '*';
                    }
                }
                else if(l[i] == tt-tt && c[i] == tt-1 && con[l[i]][c[i]-1] != 'b' && con[l[i]+1][c[i]] != 'b' && con[l[i]+1][c[i]-1] != 'b'){ //verifica os quadrados adjacentes no canto superior direito
                    vazio += 4;
//                    printf("superior direito\n");

                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[tt-tt][tt-1] = '*';
                    }
                    if(con[l[i]][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]-1] = '*';
                    }
                    if(con[l[i]+1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]] = '*';
                    }
                    if(con[l[i]+1][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]-1] = '*';
                    }
                }
                else if(l[i] == tt-1 && c[i] == tt-tt  && con[l[i]][c[i]+1] != 'b' && con[l[i]-1][c[i]] != 'b' && con[l[i]-1][c[i]+1] != 'b'){//verifica os quadrados adjacentes no canto inferior esquerdo
                    vazio += 4;
//                    printf("inferior esquerdo\n");
                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[tt-1][tt-tt] = '*';
                    }
                    if(con[l[i]][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]+1] = '*';
                    }
                    if(con[l[i]-1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]] = '*';
                    }
                    if(con[l[i]-1][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]+1] = '*';
                    }
                }
                else if(c[i] == tt-tt && l[i] != tt-1 && l[i] != tt-tt && con[l[i]][c[i]+1] != 'b' && con[l[i]+1][c[i]] != 'b' && con[l[i]-1][c[i]+1] != 'b' && con[l[i]+1][c[i]] != 'b' && con[l[i]+1][c[i]+1] != 'b'){//verifica os quadrados adjacentes da primira coluna, retirando a primeira e a ultima linhas
                    vazio += 6;
//                    printf("primeira coluna\n");
                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]] = '*';
                    }
                    if(con[l[i]][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]+1] = '*';
                    }
                    if(con[l[i]+1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]] = '*';
                    }
                    if(con[l[i]-1][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]+1] = '*';
                    }
                    if(con[l[i]+1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]] = '*';
                    }
                    if(con[l[i]+1][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]+1] = '*';
                    }
                }
                else if(c[i] == tt-1 && l[i] != tt-1 && l[i] != tt-tt && con[l[i]][c[i]-1] != 'b' && con[l[i]-1][c[i]] != 'b' && con[l[i]-1][c[i]-1] != 'b' && con[l[i]+1][c[i]] != 'b' && con[l[i]+1][c[i]-1] != 'b'){//verifica os quadrados adjacentes da ultima coluna, retirando a primeira e a ultima linhas
                    vazio += 6;
//                    printf("ultima coluna\n");
                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]] = '*';
                    }
                    if(con[l[i]][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]-1] = '*';
                    }
                    if(con[l[i]-1][c[i]] == '*'){
                       vazio--;
                    }else{
                        con[l[i]-1][c[i]] = '*';
                    }
                    if(con[l[i]-1][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]-1] = '*';
                    }
                    if(con[l[i]+1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]] = '*';
                    }
                    if(con[l[i]+1][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]-1] = '*';
                    }
//                     printf("aqui %d\n", vazio);
                }
                else if(l[i] == tt-tt && c[i] != tt-1 && c[i] != tt-tt && con[l[i]+1][c[i]] != 'b' && con[l[i]+1][c[i]-1] != 'b' && con[l[i]][c[i]-1] != 'b' && con[l[i]][c[i]+1] != 'b' && con[l[i]+1][c[i]+1] != 'b'){//verifica os quadrados adjacentes da primeira linha, retirando a primeira e a ultima colunas
                    vazio += 6;
//                    printf("primeira linha\n");
                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]] = '*';
                    }
                    if(con[l[i]+1][c[i]] == '*'){
                        vazio--;
                    }else{
                       con[l[i]+1][c[i]] = '*';
                    }
                    if(con[l[i]+1][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]-1] = '*';
                    }
                    if(con[l[i]][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]-1] = '*';
                    }
                    if(con[l[i]][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]+1] = '*';
                    }
                    if(con[l[i]+1][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]+1] = '*';
                    }
                }
                else if(l[i] == tt-1 && c[i] != tt-1 && c[i] != tt-tt && con[l[i]][c[i]+1] != 'b' && con[l[i]][c[i]-1] != 'b' && con[l[i]-1][c[i]-1] != 'b' && con[l[i]-1][c[i]] != 'b' && con[l[i]-1][c[i]+1] != 'b'){//verifica os quadrados adjacentes da ultima linha, retirando a primeira e a ultima colunas
                    vazio += 6;
//                    printf("ultima linha\n");
                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]] = '*';
                    }
                    if(con[l[i]][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]+1] = '*';
                    }
                    if(con[l[i]][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]-1] = '*';
                    }
                    if(con[l[i]-1][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]-1] = '*';
                    }
                    if(con[l[i]-1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]] = '*';
                    }
                    if(con[l[i]-1][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]+1] = '*';
                    }
                }
                else if(l[i] != tt-1 && l[i] != tt-tt && c[i] != tt-1 && c[i] != tt-tt &&  con[l[i]][c[i]+1] != 'b' && con[l[i]][c[i]-1] != 'b' && con[l[i]-1][c[i]-1] != 'b' && con[l[i]-1][c[i]] != 'b' && con[l[i]-1][c[i]+1] != 'b' && con[l[i]+1][c[i]-1] != 'b' && con[l[i]+1][c[i]] != 'b' && con[l[i]+1][c[i]+1] != 'b'){//verifica os quadrados adjacentes do meio, retirando as ultimas e primeiras linhas e colunas
                    vazio += 9;
//                    printf("meio\n");
                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]] = '*';
                    }
                    if(con[l[i]][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]+1] = '*';
                    }
                    if(con[l[i]][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]-1] = '*';
                    }
                    if(con[l[i]-1][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]-1] = '*';
                    }
                    if(con[l[i]-1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]] = '*';
                    }
                    if(con[l[i]-1][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]-1][c[i]+1] = '*';
                    }
                    if(con[l[i]+1][c[i]-1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]-1] = '*';
                    }
                    if(con[l[i]+1][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]] = '*';
                    }
                    if(con[l[i]+1][c[i]+1] == '*'){
                        vazio--;
                    }else{
                        con[l[i]+1][c[i]+1] = '*';
                    }
                }
                else{
                    vazio++;
//                    printf("so um\n");
                    if(con[l[i]][c[i]] == '*'){
                        vazio--;
                    }else{
                        con[l[i]][c[i]] = '*';
                    }
                }
//                printf("%d\n", vazio);
            }
            else if(con[l[i]][c[i]] == 'b'){
                verifica = 1;
                break;
            }
        }

        result[k] = vazio;
        quantidadex[k] = qtd_x;
        define[k] = verifica;
        verifica = 0;
    }

    for(i = 0; i < qtjogo; i++){
        if(define[i] == 0){
            if(result[i] == quantidadex[i]){
                printf("GANHOU\n");
            }else{
                printf("FALTOU TERMINAR\n");
            }
        }else{
            printf("PERDEU\n");
        }
    }

return 0;
}
