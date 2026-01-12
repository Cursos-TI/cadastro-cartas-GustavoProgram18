#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float soma = 0, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    soma += nota1;

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    soma += nota2;

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    soma += nota3;

    media = soma / 3;

    printf("A media das tres notas e: %.2f\n", media);

    return 0;
}

