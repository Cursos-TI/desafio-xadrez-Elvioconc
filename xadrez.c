#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Código original mantido e comentado.
// Versão Nível Mestre acrescentada logo abaixo de cada parte.

// ===============================
// Funções recursivas (NIVEL MESTRE)
// ===============================

// Torre recursiva
void moverTorre(int casas) {
    if (casas == 0) return;   
    printf("Direita\n");
    moverTorre(casas - 1);    // Chamada recursiva
}

// Bispo recursivo com loop aninhado
void moverBispo(int casas) {
    if (casas == 0) return;   

    // Loop externo
    for (int i = 0; i < 1; i++) {
        // Loop interno (aninhado)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1);  // Chamada recursiva

}

// Rainha recursiva
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);   // Chamada recursiva
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Definindo o número de casas a serem movidas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasBaixoCavalo = 2;
    const int casasEsquerdaCavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // ---
    // Movimento do Bispo - Usando a estrutura while
    // Simula o movimento do Bispo cinco casas na diagonal (para cima e para a direita).
    // ---

    // ==================================================
    // BISPO (CÓDIGO COMENTADO)
    // ==================================================
    /*
    printf("--- Movimento do Bispo ---\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n"); // Adiciona uma linha em branco para separar os movimentos
    */ 

   // FIM DO MOVIMENTO DO BISPO CODIGO ANTIGO

   // ==================================================
    // BISPO (NÍVEL MESTRE - RECURSÃO + LOOP ANINHADO)
    // ==================================================
    printf("--- Movimento do Bispo (Recursivo + Loop Aninhado) ---\n");
    moverBispo(casasBispo);
    printf("\n");


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // ---
    // Movimento da Torre - Usando a estrutura for
    // Simula o movimento da Torre cinco casas para a direita.
    // ---

    // ==================================================
    // TORRE (CÓDIGO COMENTADO)
    // ==================================================
    /*
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Adiciona uma linha em branco para separar os movimentos
    */

    // FIM DO MOVIMENTO DA TORRE CODIGO ANTIGO

    // ==================================================
    // TORRE (NÍVEL MESTRE - RECURSÃO)
    // ==================================================
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(casasTorre);
    printf("\n");

    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // ---
    // Movimento da Rainha - Usando a estrutura do-while
    // Simula o movimento da Rainha oito casas para a esquerda.
    // ---

    // ==================================================
    // RAINHA (CÓDIGO COMENTADO)
    // ==================================================
    /*
    printf("--- Movimento da Rainha ---\n");
    int j = 0;
    if (casasRainha > 0) { // Garante que o loop do-while execute pelo menos uma vez
        do {
            printf("Esquerda\n");
            j++;
        } while (j < casasRainha);
    }

    printf("\n"); // Adiciona uma linha em branco para separar os movimentos
    */

    // FIM DO MOVIMENTO DA RAINHA CODIGO ANTIGO

    // ==================================================
    // RAINHA (NÍVEL MESTRE - RECURSÃO)
    // ==================================================
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(casasRainha);
    printf("\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // ---
    // Movimento do Cavalo - Usando loops aninhados (for e while)
    // Simula o movimento do Cavalo duas casas para baixo e uma para a esquerda.
    // O loop externo (for) controla a primeira parte do movimento (as casas para baixo).
    // O loop interno (while) controla a segunda parte do movimento (a casa para a esquerda),
    // executando apenas uma vez após a conclusão do primeiro movimento.
    // ---

    // ==================================================
    // CAVALO (CÓDIGO COMENTADO)
    // ==================================================
    /*
    printf("--- Movimento do Cavalo ---\n");
    
    // Movimento vertical (para baixo)
    // Loop 'for' para as duas casas para baixo
    for (int k = 0; k < casasBaixoCavalo; k++) {
        printf("Baixo\n");
        
        // Loop 'while' aninhado para a casa para a esquerda
        // Ele só executa na última iteração do 'for'
        if (k == casasBaixoCavalo - 1) {
            int l = 0;
            while (l < casasEsquerdaCavalo) {
                printf("Esquerda\n");
                l++;
            }
        }
    }
    */

    // FIM DO MOVIMENTO DO CODIGO ANTIGO

    // ==================================================
    // CAVALO (NÍVEL MESTRE - LOOP AVANÇADO COM VARIÁVEIS MÚLTIPLAS, CONTINUE E BREAK)
    // Movimento em L: 2 casas para cima + 1 para a direita
    // ==================================================
    printf("--- Movimento do Cavalo (Loop Avançado) ---\n");
    for (int passo = 1, controle = 0; passo <= 3 && controle < 3; passo++, controle++) {
        if (passo <= 2) {
            printf("Cima\n");   // 2 passos para cima
            continue;          // volta para o próximo passo
        }
        if (passo == 3) {
            printf("Direita\n"); // último passo        
            break;  //termina o loop
        }
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.  

    return 0;
}
