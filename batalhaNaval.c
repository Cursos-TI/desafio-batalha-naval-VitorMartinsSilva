#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

int main() 
{
    printf("Tabuleiro\n");
    int  MatrizNaval [10] [10] = 
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},      // O número '3' representa onde estão as partes dos navios
        {0, 0, 0, 3, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0, 0, 0},
        {3, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    
    // Impressão da matriz 

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %d ", MatrizNaval [i] [j]); // Imprime a linha da matriz
        }
        
        printf("\n"); // Pular para próxima linha da matriz

    }
    
    printf("\n");
    printf("Habilidade de Cone\n");
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    
    //Habilidade em cone:
    int matrizCone [10][10] =
    {  
     {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
     {0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
     {1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

        for (int i = 0; i < 10; i++)
        { 
            
            for (int j = 0; j < 10; j++)
            {
                if (matrizCone [i][j]==1)
                {
                    MatrizNaval [i] [j] = 1;
                }                
                printf(" %d ", MatrizNaval [i] [j]);
            }
           printf("\n");
        }
        
    printf("Habilidade de Octaedro\n");
    // Habilidade em octaedro:
    int MatrizOcta [10][10] =
    {
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
     {0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
     {0, 0, 0, 0, 0, 0, 0, 0, 1, 0}
    };

    for (int i = 0; i < 10; i++)
        { 
            
            for (int j = 0; j < 10; j++)
            {
                if (MatrizOcta [i][j]==1)
                {
                    MatrizNaval [i] [j] = 1;
                }                
                printf(" %d ", MatrizNaval [i] [j]);
            }
           printf("\n");
        }

    printf("Habilidade de Cruz\n");
    // Habilidade em cruz:
    int MatrizCruz [10][10] =
    {    
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
     {1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
     {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}
    };

    for (int i = 0; i < 10; i++)
        { 
            
            for (int j = 0; j < 10; j++)
            {
                if (MatrizCruz [i][j]==1)
                {
                    MatrizNaval [i] [j] = 1;
                }                
                printf(" %d ", MatrizNaval [i] [j]);
            }
           printf("\n");
        }

    return 0;
}
