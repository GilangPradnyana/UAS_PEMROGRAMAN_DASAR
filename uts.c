#include <stdio.h>

void program1() {
  int nilai1, nilai2 ;

  printf("Nilai awal : ");
  scanf("%d", &nilai1);
  printf("Nilai akhir : ");
  scanf("%d", &nilai2); 

  // for (nilai1; nilai1 == nilai2; nilai1+= 2){
  //   printf("%d", nilai1);
  // }

  // printf("nilai 1 : %d", nilai1);
  // printf("nilai 2 : %d", nilai2);

  while (nilai1 <= nilai2) {
    printf("%d\n", nilai1);
    nilai1 += 3;
  }
  
}


void program2() {

  int bPertama, bKedua, bKetiga;
  int pajak, bInvestasi, pBersih, pTotal;

    printf("Masukkan Pendapatan Bulan Pertama = ");
    scanf("%d", &bPertama);

    printf("Masukkan Pendapatan Bulan Kedua = ");
    scanf("%d", &bKedua);

    printf("Masukkan Pendapatan Bulan Ketiga = ");
    scanf("%d", &bKetiga);


    pTotal = bPertama + bKedua + bKetiga;
    pajak = pTotal * 0.15;


    if (pTotal >= 15000000.0) {
      bInvestasi = pTotal * 0.15;
    } else {
      bInvestasi = pTotal * 0.5;
    }

    pBersih = pTotal - pajak - bInvestasi;


    printf("\nPendapatan dalam 3 bulan = %d", pTotal);
    printf("\nPajak = %d", pajak);
    printf("\nBiaya Investasi = %d", bInvestasi);
    printf("\nPendapatan Bersih = %d", pBersih);




}

int main () {
  // program1() ;
  program2() ;

  return 0;
}