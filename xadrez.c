#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    moverTorre(casas - 1);
    printf("%d - Direita\n", casas);
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas, int passos) {
    if (casas == 0) return;
    printf("Passo %d: Cima, Direita\n", passos);
    moverBispo(casas - 1, passos + 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    moverRainha(casas - 1);
    printf("%d - Esquerda\n", casas); 
}

// Função para movimentação do Cavalo utilizando loops complexos
void moverCavalo(int casas_vertical, int casas_horizontal) {
    if(casas_vertical == 0 && casas_horizontal == 0 ) return;
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < casas_vertical; i++) {
        if (i % 2 == 0) {  // Para garantir que o movimento para baixo aconteça a cada 2 casas
            printf("%d - Baixo\n", i + 1);
            if (i + 1 < casas_vertical) { // Verifica para evitar excesso de movimento
                printf("%d - Baixo\n", i + 2);  // Movimento adicional para baixo
            }
            i++;  
        }

        // Usando o loop 'while' para o movimento para a esquerda (apenas 1 vez)
        int j = 0;
        while (j < casas_horizontal) {
            printf("%d - Esquerda\n", j + 3); // Movimento adicional para esquerda
            j++;
        }
    }
}

int main() {
    // Movimentos da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    // Movimentos do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 1);
    
    // Movimentos da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);
    
    // Movimentos do Cavalo
    moverCavalo(2,1);
    
    return 0;
}
