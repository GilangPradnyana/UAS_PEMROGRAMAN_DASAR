#include <stdio.h>

struct mhs
  {
    char nama[50];
    char NIM[50];
    float kuis;
    float UTS;
    float UAS;
    float nilaiAkhir;
  };

struct mhs mhs;

void program2() {
  
    printf("Masukkan Nama Anda = ");
    scanf("%s", mhs.nama);

    printf("Masukkan NIM Anda = ");
    scanf("%s", mhs.NIM);

    printf("Masukkan Nilai Kuis = ");
    scanf("%f", &mhs.kuis);
    
    printf("Masukkan Nilai UTS = ");
    scanf("%f", &mhs.UTS);
    
    printf("Masukkan Nilai UAS = ");
    scanf("%f", &mhs.UAS);
    

    mhs.nilaiAkhir = (mhs.kuis * 0.20) + (mhs.UTS * 0.30) + (mhs.UAS  * 0.50);

    printf("\n==================================\n");
    printf("Nama anda adalah : %s", mhs.nama);
    printf("\nNIM anda adalah : %s", mhs.NIM);
    printf("\nNilai Kuis anda adalah : %.2f", mhs.kuis);
    printf("\nNilai UTS anda adalah : %.2f", mhs.UTS);
    printf("\nNilai UAS anda adalah : %.2f", mhs.UAS);
    printf("\nNilai Akhir anda adalah : %.2f", mhs.nilaiAkhir);

}

int main () {
  // program1() ;
  program2() ;

  return 0;
}