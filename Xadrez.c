
#include <stdio.h>
// Função recursiva para mover torre.
void moverTorre(int count) {
    if (count > 0)
    {
        printf("Direita > \n");
        moverTorre(count -1);
    }
    
}

void moverBispo(int count) {
    if (count > 0)
    {
        printf("Cima, Direita \n");
        moverBispo(count - 1);
    }
   
}

void moverRainha(int count) {
    if (count > 0)
    {
        printf("< Esquerda \n");
        moverRainha(count - 1);
    }
    
}

void moverCavalo() {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 1; j++)
            printf("Cima");
    }

    for(int k =0; k < 1; k++) {
        printf("Direita");
    }
}

int main() {

    //Definindo contador e chamando a função de mover a Torre.
    printf("O movimento da torre na jogada é: \n");
    moverTorre(5);
    printf("\n");
    

    //Definindo contador e chamando a função de mover o Bispo.
    printf("O movimento do Bispo é: \n");
    moverBispo(5);
    printf("\n");

    //Definindo contador e chamando a função de mover a Rainha.
    printf("O movimento da Rainha é: \n");
    moverRainha(8);
    printf("\n");


    // Implementação do movimento do cavalo.
    printf("O movimento do cavalo é: \n");
    moverCavalo();
    printf("\n");
    
    return 0;

}


