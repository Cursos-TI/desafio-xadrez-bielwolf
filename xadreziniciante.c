#include <stdio.h>

int main() {

    int B = 0, R = 0;

    printf("Bem-vindo ao desafio de xadrez\n");

    printf("Torre se movendo\n");
    for (int T = 0; T < 5; T++) {
        printf("Direita!\n");
    }

    printf("Bispo se movendo!\n");
    while(B < 5) {
        printf("Cima, Direita!\n");
        B++;
    }

    printf("Rainha se movendo!\n");
    do {
        printf("Esquerda!\n");
        R++;
    }while (R < 8);
}

