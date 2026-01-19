#include <stdio.h>
#include <stdlib.h>

int bilanganBesar(int a, int b, int c, int d) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}

float hitungBunga(float pinjaman, int durasi, char* nama, char* NIM) {
    float bunga;
    if (durasi > 10) {  
        bunga = pinjaman * 0.01;
    } else if (durasi >= 5 && durasi <= 10) {
        bunga = pinjaman * 0.05;
    } else if (durasi >= 1 && durasi < 5) {
        bunga = pinjaman * 0.1;
    } else {
        printf("Invalid durasi\n");
        return 0;
    }
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", NIM);
    printf("Besar bunga perbulan: %.2f\n", bunga);
    return bunga;
}

int main() {

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Tentukan bilangan terbesar dari empat bilangan bulat\n");
        printf("2. Hitung besar bunga perbulan\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int a, b, c, d;
                printf("Masukkan empat bilangan bulat: ");
                scanf("%d %d %d %d", &a, &b, &c, &d);
                int max = bilanganBesar(a, b, c, d);
                printf("Bilangan terbesar: %d\n", max);
                break;
            }
            case 2: {
                char nama[50];
                char NIM[50];
                float bunga;
                int durasi;
                printf("Masukkan nama: ");
                scanf("%s", nama);
                printf("Masukkan NIM: ");
                scanf("%s", NIM);
                printf("Masukkan besar pinjaman: ");
                scanf("%f", &bunga);
                printf("Masukkan lama pinjaman (bulan): ");
                scanf("%d", &durasi);
                hitungBunga(bunga, durasi, nama, NIM);
                break;
            }
            case 3:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (choice != 3);

    return 0;
}
