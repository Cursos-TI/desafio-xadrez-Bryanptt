#include <stdio.h>

int main() {

    // Desafio movimento peças de xadres usando estruturas de repetição


    printf("MOVIMENTOS DE XADREZ\n\n");
    printf("Torre: movimentos horizontais e verticais\n"); // torre cinco movimentos para direita (for)

    for (int t = 0; t < 5; t++) {
        printf("Direita\n");
        
        }


    //////

    printf("\nBispo: movimentos diagonais\n"); // bispo cinco movimentos diagonal direita cima (while)
    int b = 0;

    while (b < 5) {

        printf("Diagonal direita cima\n");
        b++;
    }


    //////

    printf("\nRainha: movimentos horizontais, verticais e diagonais\n"); // rainha oito movimentos para esquerda (do while)

    int r = 0;
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    //////

    printf("\nCavalo: movimentos em L\n"); // cavalo movimentos em L para baixo-esquerda (loops aninhados)
    int c = 0;

    while (c < 1) {

        for (int c2 = 0; c2 < 2; c2++)
        {
            printf("Baixo\n");
        }
        
     printf("Esquerda\n");
        c++;
    }


    return 0;
}