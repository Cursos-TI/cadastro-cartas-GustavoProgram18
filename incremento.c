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

    int numero1 = 1;
    printf("Antes incremento: %d\n", numero1);

    //numero1 = numero1 + 1;
    //numero1 += 1;

    numero1++;
    printf("Apos incremento: %d\n", numero1);

    //numero1 = numero1 - 1;
    //numero1 -= 1;
    
    numero1--;
    printf("Apos decremento: %d\n", numero1);

    return 0;
}