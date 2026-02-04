#include <stdio.h>
// Desafio movimento peças de xadres usando estruturas de repetição

void movertorre(int torre) {
    
    if (torre > 0) {
    printf("Direita\n");
    movertorre(torre - 1);
    }      
}

void moverbispo(int bispo) {
    
    if (bispo > 0) {
        do
        {
            printf("Cima ");
            for (int b2 = 0; b2 < 1; b2++) {
                printf("Direita\n");
            }
            bispo--;    
        } while (bispo > 0);
    
        
    }
}

void moverrainha(int rainha) {
    do
    {
        printf("Esquerda\n");
        rainha--;
    } while (rainha > 0);
}

int main() {

    printf("Torre: movimentos horizontais e verticais\n"); // torre cinco movimentos para direita (recursao)
    movertorre(5);

    printf("\nBispo: movimentos diagonais\n"); // bispo cinco movimentos diagonal direita cima (recursao com aninhamento de loops)
    moverbispo(5);

    printf("\nRainha: movimentos horizontais, verticais e diagonais\n"); // rainha oito movimentos para esquerda (do while)
    moverrainha(8);

    

    printf("\nCavalo: movimentos em L\n"); // cavalo movimentos em L para cima-direita (loops aninhados)
    int c = 0;

    while (c < 1) { 

        for (int c2 = 0; c2 < 2; c2++) {
            printf("Cima\n");
            ;
        }
        
     printf("Direita\n");
        c++;
    }


    return 0;
}