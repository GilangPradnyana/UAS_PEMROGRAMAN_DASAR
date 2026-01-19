#include <stdio.h>

// Function Declaration ==
float penjumlahan(float a, float b);
float pengurangan(float a, float b);
float perkalian(float a, float b);
float pembagian(float a, float b);

int main() {
    int pilihan;
    float x, y, hasil;

    // Menu
    printf("=== Program Kalkulator Sederhana ===\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Pilih menu (1-4): ");
    scanf("%d", &pilihan);

    // Input Section
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &x);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &y);

    // Main Section
    switch (pilihan) {
        case 1:
            hasil = penjumlahan(x, y);
            printf("Hasil penjumlahan = %.2f\n", hasil);
            break;
        case 2:
            hasil = pengurangan(x, y);
            printf("Hasil pengurangan = %.2f\n", hasil);
            break;
        case 3:
            hasil = perkalian(x, y);
            printf("Hasil perkalian = %.2f\n", hasil);
            break;
        case 4:
            if (y != 0) {
                hasil = pembagian(x, y);
                printf("Hasil pembagian = %.2f\n", hasil);
            } else {
                printf("Error: Pembagian dengan nol tidak diperbolehkan!\n");
            }
            break;
        default:
            printf("Pilihan tidak valid!\n");
    }

    return 0;
}


float penjumlahan(float a, float b) {
    return a + b;
}

float pengurangan(float a, float b) {
    return a - b;
}

float perkalian(float a, float b) {
    return a * b;
}

float pembagian(float a, float b) {
    return a / b;
}
