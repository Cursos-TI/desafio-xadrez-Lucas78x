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
    
    // Movimentos do Cavalo: 2 casas para baixo e 1 para a esquerda (movimento em "L")
    printf("\nMovimento do Cavalo:\n");

    // Loop externo (utilizado for): move o Cavalo 1 vez para baixo (isso será repetido 2 vezes i <2)
    for (int i = 0; i < 2; i++) {
        // Loop interno (utilizado while): move 1 vez para a esquerda (isso será repetido até j < 1)
        int j = 0;
        while (j < 1) {
            printf("Baixo\n");  // Movimentando o Cavalo para baixo
            printf("Esquerda\n"); // Movimentando o Cavalo para a esquerda
            j++;
        }
    }

    return 0;
}
