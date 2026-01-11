#include <stdio.h>

int main() {
    /*
    Incremento (++)
    Pre-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pre-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;
    printf("Antes incremento: %d\n", numero1);

    //numero1 = numero1 + 1;
    //numero1 += 1;
    //Pos incremento:
    //resultado = numero1;
    //numero1++;    
    resultado = numero1++;
    //printf("Apos incremento: %d\n", numero1);
    printf("Apos Pos-incremento - Numero 1: %d - resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos Pre- incremento - Numero 1: %d - resultado: %d\n", numero1, resultado);

    //numero1 = numero1 - 1;
    //numero1 -= 1;

    //numero1--;
    printf("Apos decremento: %d\n", numero1);

    return 0;
}