#include <stdio.h>

int main() {
    // Movimentos da Torre: 5 casas para a direita (movimento horizontal)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Movimentos do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimentos da Rainha: 8 casas para a esquerda (movimento horizontal)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);

    return 0;
}
