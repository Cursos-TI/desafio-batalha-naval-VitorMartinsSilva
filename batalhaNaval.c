#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() 
{
    int  MatrizNaval [3] [3] = 
    {
        {3, 3, 0},      // O número '3' representa onde estão as partes dos navios
        {0, 0, 3},
        {0, 0, 3}
    };

   // Exibindo onde estão cada parte de cada navio  
   printf("Parte 1 do navio 1 posicionado na linha [0] coluna [0] %d\n", MatrizNaval [0] [0]);
   printf("Parte 2 do navio 1 posicionado na linha [0] coluna [1] %d\n", MatrizNaval [0] [1]);
   printf("Parte 1 do navio 2 posicionado na linha [1] coluna [2] %d\n", MatrizNaval [1] [2]);
   printf("Parte 1 do navio 1 posicionado na linha [2] coluna [2] %d\n", MatrizNaval [2] [2]);
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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

    return 0;
}
