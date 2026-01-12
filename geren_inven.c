#include <stdio.h>

int main() {
    // ===== Produto 1 =====
    char nome1[40];
    unsigned long quantidade1;          // grande e sem sinal
    unsigned long long precoCent1;      // preço em centavos (evita erro de float)
    unsigned long long total1;          // valor total em centavos

    // ===== Produto 2 =====
    char nome2[40];
    unsigned long quantidade2;
    unsigned long long precoCent2;
    unsigned long long total2;

    printf("=== Cadastro do Produto 1 ===\n");
    printf("Nome do produto: ");
    scanf(" %39[^\n]", nome1);

    printf("Quantidade em estoque (numero inteiro): ");
    scanf("%lu", &quantidade1);

    printf("Preco em centavos (ex: R$ 19,90 => 1990): ");
    scanf("%llu", &precoCent1);

    total1 = (unsigned long long)quantidade1 * precoCent1;

    printf("\n=== Cadastro do Produto 2 ===\n");
    printf("Nome do produto: ");
    scanf(" %39[^\n]", nome2);

    printf("Quantidade em estoque (numero inteiro): ");
    scanf("%lu", &quantidade2);

    printf("Preco em centavos (ex: R$ 19,90 => 1990): ");
    scanf("%llu", &precoCent2);

    total2 = (unsigned long long)quantidade2 * precoCent2;

    // ===== Exibir dados =====
    printf("\n============================\n");
    printf("         INVENTARIO\n");
    printf("============================\n");

    printf("\nProduto 1: %s\n", nome1);
    printf("Quantidade: %lu\n", quantidade1);
    printf("Preco (centavos): %llu\n", precoCent1);
    printf("Valor total (centavos): %llu\n", total1);

    printf("\nProduto 2: %s\n", nome2);
    printf("Quantidade: %lu\n", quantidade2);
    printf("Preco (centavos): %llu\n", precoCent2);
    printf("Valor total (centavos): %llu\n", total2);

    // ===== Comparacoes (operadores relacionais) =====
    printf("\n============================\n");
    printf("          COMPARACOES\n");
    printf("============================\n");

    printf("\n--- Quantidade em estoque ---\n");
    printf("Produto 1 tem mais quantidade que Produto 2? %d\n", (quantidade1 > quantidade2));
    printf("Produto 1 tem menos quantidade que Produto 2? %d\n", (quantidade1 < quantidade2));
    printf("Quantidade igual? %d\n", (quantidade1 == quantidade2));
    printf("Quantidade diferente? %d\n", (quantidade1 != quantidade2));
    printf("Produto 1 tem quantidade >= Produto 2? %d\n", (quantidade1 >= quantidade2));
    printf("Produto 1 tem quantidade <= Produto 2? %d\n", (quantidade1 <= quantidade2));

    printf("\n--- Valor total em estoque (quantidade * preco) ---\n");
    printf("Produto 1 tem valor total maior que Produto 2? %d\n", (total1 > total2));
    printf("Produto 1 tem valor total menor que Produto 2? %d\n", (total1 < total2));
    printf("Valor total igual? %d\n", (total1 == total2));
    printf("Valor total diferente? %d\n", (total1 != total2));
    printf("Produto 1 tem valor total >= Produto 2? %d\n", (total1 >= total2));
    printf("Produto 1 tem valor total <= Produto 2? %d\n", (total1 <= total2));

    return 0;
}
