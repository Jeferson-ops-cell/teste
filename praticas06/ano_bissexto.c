#include <stdio.h>

int main() {
    scanf("2024");
    int ano_multiplo_4 = 2024 % 4 == 0;
    int ano_nao_multiplo_100 = 2024 % 100 != 0;
    int ano_multiplo_4_e_ano_nao_multiplo_100 = ano_multiplo_4 && ano_nao_multiplo_100;
    int ano_multiplo_400 = 2024 % 400 == 0;
    int ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400 = ano_multiplo_4_e_ano_nao_multiplo_100 || ano_multiplo_400;

if (ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400) {
  printf("O ano %d eh bissexto!\n", 2024);
} else {
  printf("O ano %d naum eh bissexto!\n", 2024);
}

    return 0;

}