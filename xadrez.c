#include <stdio.h>

// Função recursiva para o movimento da Torre (5 casas para a direita)
void mover_torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    mover_torre(casas - 1);
}

// Função recursiva para o movimento do Bispo (diagonal para cima e à direita)
void mover_bispo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    mover_bispo(casas - 1);
}

// Função recursiva para o movimento da Rainha (8 casas para a esquerda)
void mover_rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// Função para o movimento do Cavalo (duas casas para baixo e uma para a esquerda) com loops aninhados
void mover_cavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
}

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    mover_torre(5);
    
    printf("\n");
   
    printf("Movimento do Bispo:\n");
    mover_bispo(5);
    
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    mover_rainha(8);
    
    printf("\n");

    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda)
    printf("Movimento do Cavalo:\n");
    mover_cavalo(1);
    printf("\n");

    return 0;
}