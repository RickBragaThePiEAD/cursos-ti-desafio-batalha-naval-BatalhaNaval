#include <stdio.h>

// Definindo Constantes
#define LINHAS 10
#define COLUNAS 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //Definindo variáveis
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Inicializa o tabuleiro com zeros
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};
    int i, j;
    
    // Exibe o tabuleiro vazio
    printf("\n@@@ NÍVEL NOVATO @@@\n");
    printf("Tabuleiro Vazio:\n");
           for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Posicionamento do navio 1 (horizontal)
    for (i = 1; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            tabuleiro[5][i] = navio1[j]; // Coloca o navio na linha 5, colunas 1 a 3
            }
        }
    // Posicionamento do navio 2 (vertical)
    for (i = 1; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            tabuleiro[i][7] = navio2[j]; // Coloca o navio na coluna 7, linhas 1 a 3
        }
    }
    // Exibe o tabuleiro com os navios posicionados
    printf("\nTabuleiro Inicial:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Mostrando o tabuleiro vazio com índices de linhas e colunas
    printf("\n@@@ NÍVEL AVENTUREIRO @@@\n");
    printf("Tabuleiro Vazio:\n");
    // Exibir o cabeçalho da coluna
    printf("\t"); // Espaço para os índices das colunas
    for (j = 0; j < COLUNAS; j++) {
        printf("%d \t", j); // Exibe os índices das colunas
    }
    printf("\n\t_________________________________________________________________________\n"); // Pular uma linha após o cabeçalho
    // Preencher o tabuleiro com zeros e exibir os índices das linhas
    for (i = 0; i < LINHAS; i++) {
        printf("%d | \t", i); // Exibe o índice da linha
        for (j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0; // Inicializa o tabuleiro com zeros
            printf("%d \t", tabuleiro[i][j]); // Exibe o valor do tabuleiro
        }
        printf("\n"); // Pular uma linha após cada linha do tabuleiro
    }
    
    // Posicionamento dos navios
    // Navio 1 (horizontal)
    for (i = 0; i < 3; i++) {
        // O valor somado à "i" define a coluna inicial do navio
        tabuleiro[0][i + 3] = navio1[i]; // Coloca o navio na linha 0, colunas 3 a 5
    }
    // Navio 2 (vertical)
    for (i = 0; i < 3; i++) {
        // O valor somado à "i" define a linha inicial do navio
        tabuleiro[i + 7][9] = navio2[i]; // Coloca o navio na coluna 9, linhas 7 a 9
    }
    // Navio 3 (diagonal)
    for (i = 0; i < 3; i++) {
        // O valor somado à "i" define a posição inicial do navio {0,0}
        tabuleiro[i + 0][i] = navio3[i]; // Coloca o navio na diagonal principal
    }
    // Navio 4 (diagonal inversa)
    for (i = 0; i < 3; i++) {
        // O valor que subtrai de "i" define a linha inicial do navio {9,0}
        // O valor somado à "i" define a coluna inicial do navio {9,0}
        tabuleiro[i + 0][9 - i] = navio4[i]; // Coloca o navio na diagonal inversa
    }
    
    // Exibe o tabuleiro com os navios posicionados
    printf("\nTabuleiro Preenchido:\n");
    // Exibir o cabeçalho da coluna
    printf("\t"); // Espaço para os índices das colunas
    for (j = 0; j < COLUNAS; j++) {
        printf("%d \t", j); // Exibe os índices das colunas
    }
    // Pular uma linha após o cabeçalho
    printf("\n\t_________________________________________________________________________\n");
    
        for (i = 0; i < LINHAS; i++) {
        printf("%d | \t", i); // Exibe o índice da linha
        for (j = 0; j < COLUNAS; j++) {
            printf("%d \t", tabuleiro[i][j]); // Exibe o valor do tabuleiro
        }
        printf("\n"); // Pular uma linha após cada linha do tabuleiro
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}     
    };
    int octaedro[3][5] = {
        {0, 0, 2, 0, 0},
        {0, 2, 2, 2, 0},
        {0, 0, 2, 0, 0}     
    };
    int cruz[3][5] = {
        {0, 0, 3, 0, 0},
        {3, 3, 3, 3, 3},
        {0, 0, 3, 0, 0}     
    };
    printf("\n@@@ NÍVEL MESTRE   @@@\n");
    printf("Tabuleiro Vazio:\n");
    // Exibir o cabeçalho da coluna
    printf("\t"); // Espaço para os índices das colunas
    for (j = 0; j < COLUNAS; j++) {
        printf("%d \t", j); // Exibe os índices das colunas
    }
    printf("\n\t_________________________________________________________________________\n"); // Pular uma linha após o cabeçalho
    // Preencher o tabuleiro com zeros e exibir os índices das linhas
    for (i = 0; i < LINHAS; i++) {
        printf("%d | \t", i); // Exibe o índice da linha
        for (j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0; // Inicializa o tabuleiro com zeros
            printf("%d \t", tabuleiro[i][j]); // Exibe o valor do tabuleiro
        }
        printf("\n"); // Pular uma linha após cada linha do tabuleiro
    }
    // Preenchendo o tabuleiro com cone
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                tabuleiro[i + 0][j + 0] = 1; // Ajusta a posição do cone no tabuleiro {0,0}
            }
        }
    }
    //Preenchendo o tabuleiro com octaedro
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (octaedro[i][j] == 2) {
                tabuleiro[i + 3][j + 5] = 2; // Ajusta a posição do octaedro no tabuleiro {3,0}
            }
        }
    }
    // Preenchendo o tabuleiro com cruz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (cruz[i][j] == 3) {
                tabuleiro[i + 6][j + 2] = 3; // Ajusta a posição da cruz no tabuleiro {6,2}
            }
        }
    }
    // Exibir o tabuleiro com as habilidades
    printf("\nTabuleiro Preenchido:\n");
    // Exibir o cabeçalho da coluna
    printf("\t"); // Espaço para os índices das colunas
    for (j = 0; j < COLUNAS; j++) {
        printf("%d \t", j); // Exibe os índices das colunas
    }
    // Pular uma linha após o cabeçalho
    printf("\n\t_________________________________________________________________________\n");
        for (i = 0; i < LINHAS; i++) {
        printf("%d | \t", i); // Exibe o índice da linha
        for (j = 0; j < COLUNAS; j++) {
            printf("%d \t", tabuleiro[i][j]); // Exibe o valor do tabuleiro
        }
        printf("\n"); // Pular uma linha após cada linha do tabuleiro
    }
    printf("\n\n");
    return 0;
}
