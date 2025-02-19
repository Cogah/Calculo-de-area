#include <stdio.h>
#include <stdlib.h> // Biblioteca necessária para utilizar a função exit

int main(int argc, char **argv) {
    int comprimento, largura;

    printf("Digite o comprimento do retangulo: ");
    if (scanf("%d", &comprimento) != 1) { //Condicional para verificar se o número inserido é um inteiro
        printf("Entrada invalida para o comprimento.\n");
        exit(1); // Termina o programa com um código de erro
    }

    printf("Digite a largura do retangulo: ");
    if (scanf("%d", &largura) != 1) { //Condicional para verificar se o número inserido é um inteiro
        printf("Entrada invalida para a largura.\n");
        exit(1); // Termina o programa com um código de erro
    }

    int area = comprimento * largura;

    printf("A area do retangulo e: %d\n", area);

    return 0;
}