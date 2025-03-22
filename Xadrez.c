
#include <stdio.h>

int main() {

    //implementação da Torre, utilizando o FOR.
    printf("O movimento da torre na jogada é: \n");

    //A peça se moverá 5 vezes, i é incrementado a cada movimento.(Direita)
    for (int i = 0; i < 5; i++)
    {
        printf("Direita > \n");
    }
    printf("\n");

    //implementação do Bispo, utilizando o Do While.
    printf("O movimento do Bispo é: \n");

    //A peça se moverá 5 vezes, movimento é incrementado a cada movimento.(Diagonal)

    int movimento = 0;
    do
    {
        printf("Cima, Direita \n");
        movimento++;

    } while (movimento < 5);
    printf("\n");

    //implementação da Rainha, utilizanod o While.
    
    printf("O movimento da Rainha é: \n");

    //A peça se moverá 8 vezes, rainha é incrementado a cada movimento.(Esquerda)
    int rainha = 0;

    while (rainha < 8)
    {
        printf("< Esquerda \n");
        rainha++;
    }
    
    
    return 0;

}
