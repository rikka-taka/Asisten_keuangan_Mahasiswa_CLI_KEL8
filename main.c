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

void kalkulatorDiskon() {
    float hargaAwal, persenDiskon, jumlahDiskon, hargaAkhir;

    printf("\n=== Kalkulator Diskon Belanja ===\n");

    // Input data
    printf("Masukkan harga awal barang (Rp): ");
    scanf("%f", &hargaAwal);

    printf("Masukkan persentase diskon (%%): ");
    scanf("%f", &persenDiskon);

    // Validasi input
    if (hargaAwal < 0) {
        printf("Harga tidak boleh negatif!\n");
        return;
    }

    if (persenDiskon < 0 || persenDiskon > 100) {
        printf("Persentase diskon harus antara 0 - 100!\n");
        return;
    }

    // Perhitungan
    jumlahDiskon = hargaAwal * (persenDiskon / 100);
    hargaAkhir = hargaAwal - jumlahDiskon;

    // Output hasil
    printf("\n--- Hasil Perhitungan ---\n");
    printf("Harga Awal      : Rp %.2f\n", hargaAwal);
    printf("Diskon          : %.2f%%\n", persenDiskon);
    printf("Potongan Harga  : Rp %.2f\n", jumlahDiskon);
    printf("Harga Akhir     : Rp %.2f\n", hargaAkhir);
    
}
