#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

    int golongan;

    printf("Golongan Pegawai (1/2/3) : "); scanf("%d", &golongan);

    printf("--------------------------------------------------\n");

    printf("\nGolongan      : %d", golongan);

    int tGolongan = (golongan == 1 ? 2000000 : (golongan == 2 ? 
    2750000 : 3500000));
    printf("\nGaji Pokok        : Rp %d", tGolongan);

    int bonus = (golongan == 1 ? 150000 : (golongan == 2 ? 175000 : 
    200000));
    printf("\nBonus             : Rp %d", bonus);

    printf("\nTotal Gaji        : Rp %d", tGolongan+bonus);

    return 0;
}