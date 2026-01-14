#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade:\n");
    scanf("%f", &umidade);

    printf("Entre com o estoque:\n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("A temperatura esta alta.\n");
    } else {
        printf("A temperatura esta normal.\n");    
    }

    if (umidade > 50){
        printf("A umidade esta alta.\n");
    } else {
        printf("A umidade esta normal.\n");      
    }

    if (estoque < estoqueminimo){
        printf("O estoque esta baixo.\n");
    } else {
        printf("O estoque esta normal.\n");      
    }

    return 0;
}

