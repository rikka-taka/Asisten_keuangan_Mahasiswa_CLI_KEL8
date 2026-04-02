#include <stdio.h>

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