#include <stdio.h>
#include <conio.h>

void singleIf () {
  int skor;
  char nilai;

  printf("Masukkan Skor : " );
  scanf("%d", &skor);

  if (skor > 7)  {
    nilai = 'A';
    printf("Nilai : %c", nilai);  
  } 
}

void A1 () {

  int b1;
  int b2;
  // char str;

  printf("Masukan Bilangan Pertama: ");
  scanf("%d", &b1);
  printf("Masukan Bilangan Kedua: ");
  scanf("%d", &b2);

  if (b1 > 3 && b2 > 4) {
    printf("Terpenuhi");
  } else {
    printf("Hai");
  }

}


void Ganjil() {
    int bilangan;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 != 0)
        printf("%d adalah bilangan ganjil\n", bilangan);

}

void Terbesar() {
  int a;
  int b;
  int c;

  printf("Masukan Bilangan Pertama : ");
  scanf("%d", &a);
  printf("Masukan Bilangan Kedua : ");
  scanf("%d", &b);
  printf("Masukan Bilangan Ketiga : ");
  scanf("%d", &c);

  if (a > b) {
    if (a > c) {
      printf("Nilai Terbesar Adalah : %d", a);
    } else {
      printf("Nilai Terbesar Adalah : %d", c);
    }
  } else {
    if (b > c) {
      printf("Nilai Terbesar Adalah : %d", b);
    } else {
      printf("Nilai Terbesar Adalah : %d", c);
    }
  }

}


int main () {
  // A1();
  Terbesar();
  // Ganjil();

  return 0;
}
