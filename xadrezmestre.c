#include <stdio.h>

void Torre(int T) {
    if(T < 5) {
        printf("Direita!\n");
        Torre(T + 1);
    }
    
}

void Rainha(int R) {
    if(R < 8) {
        printf("Esquerda!\n");
        Rainha(R + 1);
    }
    
}

void Bispo(int linha, int coluna) {
    if (linha < 5 && coluna < 5) {
        for (int i = 0; i < 1; i++) {
            printf("Cima - ");

            for (int j = 0; j < 1; j++) {
                printf("Direita!\n");
            }
        }
        Bispo(linha + 1, coluna + 1);
    }
}

void Cavalo() {
    int mv = 0;
    for (int i = 0, j = 0; i == j; i++, j++) {
        for (int j = 0; j < 1; j++) {
            if (mv) break;
            if (j == 1 && i == 1) continue;

            printf("Cima!\n");
            printf("Cima!\n");
            printf("Direita!\n");
            mv = 1;
        }

        if (mv) break;
    }
}

int main() {

    int r, t;
    int linha = 0, coluna = 0;

    printf("Bem-vindo ao desafio de xadrez\n");

    printf("Torre se movendo\n");
    Torre(t);

    printf("\n");

    printf("Bispo se movendo!\n");
    Bispo(linha, coluna);

    printf("\n");

    printf("Rainha se movendo!\n");
    Rainha(r);

    printf("\n");

    printf("Movimento do Cavalo\n");
    Cavalo();

    return 0;
}