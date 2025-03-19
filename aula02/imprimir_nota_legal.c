#include <stdio.h>

int main() {
    printf("--------------------\n");
    printf("      NOTA LEGAL    \n");
    printf("--------------------\n");
    printf("Item  Qde Prc  Valor\n");
    printf("%s %i %f %f\n", "Caneta Azul",  2, 2.0, 4.0);
    printf("%s %i %f %f\n", "Borracha", 1,  5.0,  5.0);
    printf("%s %i %f %f\n", "Resma de Papel", 1,  12.0,  12.0);
    printf("---------------------\n");
    printf("TOTAL..............: R$ %f\n", 21.0);

    return 0;
}