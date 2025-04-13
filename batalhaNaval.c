#include <stdio.h>

int main () {

    
    printf(" __DESAFIO BATALHA NAVAL__\n\n"); // Título do jogo

    //Declarção das variáveis
    // Vetor com letras para representar as colunas (A a J). Dentro de aspas simples por ser do tipo char
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Matriz 10x10 representando o tabuleiro do jogo, inicializada com [0] para represeta a água
    int tabuleiro[10][10] = {0};

    // Variável para definir tamanho dos navios (3 espaços cada)
    int tamanhoNavio = 3;

    // Vetores representando os dois navios (cada posição vale 3, apenas para identificação visual)
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // POSICIONAMENTO DOS NAVIOS

    // Variáveis para representa o navio da horizontal
    int linhaHorizontal = 2;     // Linha C (3ª linha, índice 2)
    int colunaHorizontal = 3;    // Coluna D (4ª coluna, índice 3)

        for (int i = 0; i < tamanhoNavio; i++) { // Loop para posicioar o navio na horizotal
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i]; // Posiciona o navio horizontal
        }

    // Variável para representar navio vertical 
    int linhaVertical = 5;       // Começando na linha 6 (índice 5)
    int colunaVertical = 7;      // Coluna H (índice 7)

        for (int i = 0; i < tamanhoNavio; i++) { // Loop para posicionar o navio na vertical
            tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i]; // Posiciona o navio vertical
        }

    // IMPRESSÃO DO TABULEIRO 

    // Imprimir cabeçalho com as letras das colunas
        printf("    "); // Espaço inicial para alinhar com os números das linhas
            for (int i = 0; i < 10; i++) { // Loop externo
                printf("%c ", linha[i]);
            }
            printf("\n");

        // Imprimir o conteúdo do tabuleiro (linhas com números)
        for (int i = 0; i < 10; i++) { // Loop extero
            printf("%2d  ", i + 1); // Uso do %2d para alinhar os números das linhas (1 a 10).
            for (int j = 0; j < 10; j++) { // Loop interno
                printf("%d ", tabuleiro[i][j]); // Imprime 0 (água) ou 3 (navio)
            }
            printf("\n");
        }

    return 0;
}
