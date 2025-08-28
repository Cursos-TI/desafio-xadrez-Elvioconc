#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Definindo o número de casas a serem movidas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // ---
    // Movimento do Bispo - Usando a estrutura while
    // Simula o movimento do Bispo cinco casas na diagonal (para cima e para a direita).
    // ---
    printf("--- Movimento do Bispo ---\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n"); // Adiciona uma linha em branco para separar os movimentos


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // ---
    // Movimento da Torre - Usando a estrutura for
    // Simula o movimento da Torre cinco casas para a direita.
    // ---
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Adiciona uma linha em branco para separar os movimentos


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // ---
    // Movimento da Rainha - Usando a estrutura do-while
    // Simula o movimento da Rainha oito casas para a esquerda.
    // ---
    printf("--- Movimento da Rainha ---\n");
    int j = 0;
    if (casasRainha > 0) { // Garante que o loop do-while execute pelo menos uma vez
        do {
            printf("Esquerda\n");
            j++;
        } while (j < casasRainha);
    }


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
