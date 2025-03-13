#include <stdio.h>

int main() {
    // Movimentos da Torre: 5 casas para a direita (movimento horizontal)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d - Direita\n",i + 1);
        
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
        printf("%d - Esquerda\n", j + 1);
        j++;
    } while (j < 8);
       
    // Movimentos do Cavalo: 2 casas para baixo e 1 para a esquerda (movimento em "L")
    printf("\nMovimento do Cavalo:\n");

    int casas_vertical = 2;  // Número de casas para baixo
    int casas_horizontal = 1; // Número de casas para a esquerda (apenas 1 vez)

    // Usando o loop 'for' para o movimento para baixo
    for (int i = 0; i < casas_vertical; i++) {
        if (i % 2 == 0) {  // Para garantir que o movimento para baixo aconteça a cada 2 casas
            printf("%d - Baixo\n", i + 1);
            printf("%d - Baixo\n", i + 2);  // Movimento adicional para baixo
            i++;  
        }

        // Usando o loop 'while' para o movimento para a esquerda (apenas 1 vez)
        int j = 0;
        while (j < casas_horizontal) {
            printf("%d - Esquerda\n", 3);
            j++;
        }
    }

    return 0;
}
