#include <stdio.h>

int main() {

    int B = 0, R = 0;
    int MVC = 1;

    printf("Bem-vindo ao desafio de xadrez\n");

    printf("Torre se movendo\n");
    for (int T = 0; T < 5; T++) {
        printf("Direita!\n");
    }

    printf("\n");

    printf("Bispo se movendo!\n");
    while(B < 5) {
        printf("Cima, Direita!\n");
        B++;
    }

    printf("\n");

    printf("Rainha se movendo!\n");
    do {
        printf("Esquerda!\n");
        R++;
    }while (R < 8);

    printf("\n");

    printf("Movimento do Cavalo\n");
    for (int C = 0; C < MVC; C++) {
        int P = 0;

        while (P < 2) {
            printf("Baixo!!\n");
            P++;
        }

        printf("Esquerda!\n");
    }
    return 0;
}