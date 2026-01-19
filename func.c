
  #include<stdio.h>
  #include<conio.h>
  #define phi 3.14

  
  void calculatePlusMinus () {
    int num1, num2, calculateMin, calculatePlus;
    printf("Masukkan Angka Pertama : "); 
    scanf("%d", &num1) ;

    printf("Masukkan Angka Kedua : "); 
    scanf("%d", &num2) ;

    calculatePlus = num1 + num2;
    calculateMin = num1 - num2;

    printf("Total Hasil Pertambahan : %d \n", calculatePlus);
    printf("Total Hasil Pengurangan : %d", calculateMin);

  }
  
  void calculateSquare () {
    int angka1, hasilKuadrat;
    printf("Masukkan Angka Yang Ingin diKuadratkan : "); 
    scanf("%d", &angka1) ;

    hasilKuadrat = angka1*angka1;

    printf("Total Hasil Kuadrat : %d \n", hasilKuadrat);

  }

  void caluclateJariJari () {
    float luas, jari2;
    printf("Masukkan Jari Jari Lingkaran : "); 
    scanf("%f", &jari2) ;

    luas = phi*(jari2*jari2);
    printf("Luas Lingkaran : %f", luas);

  } 

  // void clearScreen() {
  //   // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
  //   printf("\x1B[2J\x1B[H");
  // }

  void calculateDiscount() {
    int harga, diskon, totalHarga;
    printf("Masukan Harga Produk : ");
    scanf("%d", &harga);

    diskon = harga * 0.25;
    totalHarga = harga - diskon;

    printf("Harga Barang = %d \n", harga);
    printf("Diskon = %d \n", diskon);
    printf("Total Harga = %d \n", totalHarga);
  }


  int main() {
    // clearScreen();

    
    int val;
    printf("Pilih Program : \n 1.Hitung Plus Minus \n 2.Hitung Kuadrat \n 3.Hitung Jari Jari \n 4.Hitung Harga \n Program Yang Kamu Pilih = ");
    scanf("%d", &val);
    if (val == 1) {
      calculatePlusMinus();
    } else if (val == 2) {
      calculateSquare();
    } else if (val == 3) {
      caluclateJariJari();
    } else if (val == 4) {
      calculateDiscount();
    }
    return 0;
  }