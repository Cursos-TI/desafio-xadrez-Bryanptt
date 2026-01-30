#include <stdio.h>

int main() {

  


    printf("MOVIMENTOS DE XADREZ\n\n");
    printf("Torre: movimentos horizontais e verticais\n");

    for (int t = 0; t < 5; t++) {
        printf("Direita\n");
        
        }

    printf("\nBispo: movimentos diagonais\n");
    int b = 0;

    while (b < 5) {

        printf("Diagonal direita cima\n");
        b++;
    }


    printf("\nRainha: movimentos horizontais, verticais e diagonais\n");

    int r = 0;
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r < 8);
    
    


    return 0;
}