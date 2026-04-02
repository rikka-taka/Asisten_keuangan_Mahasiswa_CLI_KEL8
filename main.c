#include <stdio.h>

// Deklarasi fungsi
void kalkulatorDiskon();
void splitBill();
void bungaTabungan();
void sisaUangJajan();

int main() {
    int pilihan;

    do {
        printf("\n=== MENU UTAMA ===\n");
        printf("1. Kalkulator Diskon Belanja\n");
        printf("2. Kalkulator Split Bill\n");
        printf("3. Kalkulator Bunga Tabungan Sederhana\n");
        printf("4. Kalkulator Sisa Uang Jajan\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                kalkulatorDiskon();
                break;
            case 2:
                splitBill();
                break;
            case 3:
                bungaTabungan();
                break;
            case 4:
                sisaUangJajan();
                break;
            case 0:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }

    } while(pilihan != 0);

    return 0;
}

void kalkulatorDiskon(){

}

void splitBill(){

}

void bungaTabungan(){
    float saldoAwal, bungaPersen, totalBunga, totalAkhir;

    printf("\n---Kalkulator Bunga Tabungan Sederhana---\n");

    //Input dari pengguna
    printf("Masukkan saldo awal : ");
    scanf("%f", &saldoAwal);

    printf("Masukkan persentase bunga bulanan : ");
    scanf("%f", bungaPersen);

    //Logika perhitungan
    totalBunga = saldoAwal * (bungaPersen / 100);
    totalAkhir = saldoAwal + totalBunga;

    //Output hasil
    printf("\nTotal bunga bulan ini : Rp %.2f\n", totalBunga);
    printf("\nSaldo akhir : Rp %.2f\n", totalAkhir);
}

void sisaUangJajan(){

}
