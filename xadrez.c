#include <stdio.h>

// =====================================================
// Funções recursivas para simular os movimentos
// =====================================================

// -----------------------------
// Função recursiva da TORRE
// -----------------------------
// Move-se em linha reta horizontalmente (5 casas para a direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Caso base da recursão
    }
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// -----------------------------
// Função recursiva do BISPO
// -----------------------------
// Move-se na diagonal (5 casas para cima e à direita)
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Caso base
    }

    // Loops aninhados (vertical e horizontal)
    for (int v = 0; v < 1; v++) { // Movimento vertical
        for (int h = 0; h < 1; h++) { // Movimento horizontal
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casasRestantes - 1); // Recursão
}

// -----------------------------
// Função recursiva da RAINHA
// -----------------------------
// Move-se 8 casas para a esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Caso base
    }
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// =====================================================
// Movimento complexo do CAVALO com loops aninhados
// =====================================================
// O cavalo agora se move em "L": duas casas para cima e uma para a direita
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do CAVALO (2 casas para cima e 1 para a direita):\n");

    // Loop externo controla o movimento vertical
    for (int i = 1, limite = movimentosVerticais; i <= limite; i++) {
        printf("Cima\n");

        // Se chegou à primeira casa, apenas imprime e continua
        if (i == 1) {
            continue;
        }

        // Loop interno controla o movimento horizontal
        for (int j = 1; j <= movimentosHorizontais; j++) {
            if (j > 1) {
                break; // não deve mover mais de 1 casa na horizontal
            }
            printf("Direita\n");
        }
    }
}

// =====================================================
// Função principal
// =====================================================
int main() {
    // =======================
    // Cabeçalho do programa
    // =======================
    printf("=== Simulação de Movimentos de Xadrez ===\n\n");

    // =======================
    // Movimento da TORRE (recursivo)
    // =======================
    int casasTorre = 5;
    printf("Movimento da TORRE (5 casas para a direita):\n");
    moverTorre(casasTorre);
    printf("\n");

    // =======================
    // Movimento do BISPO (recursivo + loops aninhados)
    // =======================
    int casasBispo = 5;
    printf("Movimento do BISPO (5 casas na diagonal para cima e à direita):\n");
    moverBispo(casasBispo);
    printf("\n");

    // =======================
    // Movimento da RAINHA (recursivo)
    // =======================
    int casasRainha = 8;
    printf("Movimento da RAINHA (8 casas para a esquerda):\n");
    moverRainha(casasRainha);
    printf("\n");

    // =======================
    // Movimento do CAVALO (loops complexos)
    // =======================
    moverCavalo();

    // =======================
    // Fim da simulação
    // =======================
    printf("\nSimulação concluída!\n");

return 0;
}
