#include <stdio.h>

void hitungGaji() {
    // Declarate Variabel
    char nama[100];
    int golongan, status, jumlahAnak;
    long gajiPokok, tunjangan, totalGaji;
    
    // Header
    printf("=== HITUNG GAJI KARYAWAN ===\n");
    printf("Masukkan nama karyawan: ");
    scanf("%s", nama);
    
    printf("Masukkan golongan (1/2/3): ");
    scanf("%d", &golongan);
    
    // Main Section
    if (golongan == 1) gajiPokok = 2000000;
    else if (golongan == 2) gajiPokok = 3000000;
    else if (golongan == 3) gajiPokok = 4000000;
    else gajiPokok = 0;
    
    printf("Apakah sudah menikah? (1=Ya, 0=Tidak): ");
    scanf("%d", &status);
    
    tunjangan = 0;
    if (status == 1) {
        printf("Masukkan jumlah anak: ");
        scanf("%d", &jumlahAnak);
        tunjangan = (gajiPokok / 2) + (jumlahAnak * gajiPokok / 4);
    }
    
    totalGaji = gajiPokok + tunjangan;

    // Output
    printf("\nNama karyawan: %s\n", nama);
    printf("Status: %s\n", status == 1 ? "Menikah" : "Belum Menikah");
    printf("Tunjangan: Rp %ld\n", tunjangan);
    printf("Total Gaji: Rp %ld\n\n", totalGaji);
}

void bookingKamar() {

    // Declarate
    char namaTamu[100];
    int jenisKamar, lamaMalam;
    long hargaKamar, totalBiaya;
    
    printf("=== BOOKING KAMAR HOTEL ===\n");
    printf("Masukkan nama tamu: ");
    scanf("%s", namaTamu);
    
    printf("Pilih jenis kamar:\n");
    printf("1. Single Room (Rp 650.000)\n");
    printf("2. Double Room (Rp 900.000)\n");
    printf("3. Deluxe Room (Rp 1.200.000)\n");
    printf("4. Suite Room (Rp 1.500.000)\n");
    printf("Pilihan (1/2/3/4): ");
    scanf("%d", &jenisKamar);
    
    // Main Section
    if (jenisKamar == 1) hargaKamar = 650000;
    else if (jenisKamar == 2) hargaKamar = 900000;
    else if (jenisKamar == 3) hargaKamar = 1200000;
    else if (jenisKamar == 4) hargaKamar = 1500000;
    else hargaKamar = 0;
    
    // Output
    printf("Lama menginap (malam): ");
    scanf("%d", &lamaMalam);
    
    totalBiaya = hargaKamar * lamaMalam;
    
    printf("\nNama tamu: %s\n", namaTamu);
    printf("Total biaya: Rp %ld\n\n", totalBiaya);
}

int main() {
  // Main
    int pilihan;
    
    printf("=== MENU UTAMA ===\n");
    printf("1. Hitung Gaji\n");
    printf("2. Booking Kamar Hotel\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);
    
    if (pilihan == 1) hitungGaji();
    else if (pilihan == 2) bookingKamar();
    else printf("Pilihan tidak valid\n");
    
    return 0;
}