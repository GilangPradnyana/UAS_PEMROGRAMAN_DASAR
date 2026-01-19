#include <stdio.h>

void program1() {
    float a, b;
    int menu;

    printf("Masukkan bilangan pertama : ");
    scanf("%f", &a);

    printf("Masukkan bilangan kedua   : ");
    scanf("%f", &b);

    printf("\nMenu Operasi:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("Pilih menu (1-3): ");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            printf("Hasil = %.2f\n", a + b);
            break;
        case 2:
            printf("Hasil = %.2f\n", a - b);
            break;
        case 3:
            printf("Hasil = %.2f\n", a * b);
            break;
        default:
            printf("Menu tidak valid!\n");
    }

    // return 0;
}

void program2() {
    int total;

    printf("Masukkan total pembelian: ");
    scanf("%d", &total);

    if (total > 100000) {
        printf("Bonus: Diskon 10%%\n");
    } 
    else if (total > 50000) {
        printf("Bonus: Piring cantik\n");
    } 
    else if (total > 10000) {
        printf("Bonus: Gelas cantik\n");
    } 
    else {
        printf("Bonus: Tidak ada bonus\n");
    }

    // return 0;
}


int main () {
  program1();
  // program2();

  return 0;
}