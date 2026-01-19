#include <stdio.h>
#include <conio.h>
#include <string.h>


void calculateAvg() {
  int num1, num2, num3, sum ;

    printf("Masukkan Angka Pertama : "); 
    scanf("%d", &num1) ;
    
    printf("Masukkan Angka Kedua : "); 
    scanf("%d", &num2) ;
    
    printf("Masukkan Angka Ketiga : "); 
    scanf("%d", &num3) ;

    sum = (num1 + num2 + num3) / 3;
    


    printf("==============================================\n");
    printf("Angka Pertama : %d ", num1);
    printf("\nAngka Kedua : %d ", num2);
    printf("\nAngka Ketiga : %d ", num3);
    printf("\nTotal Hasil Rata - Rata : %d ", sum);

}

void tunjanganGaji() {
  int gajiPokok, tunjangan, gajiBersih;
  int potongan = 200000;

  printf("Masukan Gaji Pokok : ");
    scanf("%d", &gajiPokok) ;
    
    printf("Masukan Tunjangan : ");
      scanf("%d", &tunjangan) ;

  gajiBersih = (gajiPokok + tunjangan) - potongan;

  printf("Gaji Pokok : %d", gajiPokok);
  printf("\nTunjangan : %d", tunjangan);
  printf("\nPotongan : %d", potongan );
  printf("\nGaji Bersih : %d", gajiBersih );
  }

void calculateDiscount() {
    int harga, totalHarga;
    float diskon;

    printf("Masukan Harga Produk : ");
    scanf("%d", &harga);

    diskon = harga * 0.25;
    totalHarga = harga - diskon;

    printf("Harga Barang = %d \n", harga);
    printf("Diskon = %f \n", diskon);
    printf("Total Harga = %d \n", totalHarga);
  }



int main () {
    int val;
    printf("Pilih Program : \n 1.Hitung Rata Rata \n 2.Hitung Gaji Bersih \n 3.Hitung Diskon \n Program Yang Kamu Pilih = ");
    scanf("%d", &val);
    if (val == 1) {
      calculateAvg();
    } else if (val == 2) {
      tunjanganGaji();
    } else if (val == 3) {
      calculateDiscount();
    } 
    return 0;
}