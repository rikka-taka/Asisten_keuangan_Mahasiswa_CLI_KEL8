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


void splitBill() {
    float totalTagihan;
    int jumlahOrang;
    printf("\nKALKULATOR SPLIT BILL\n");

    printf("Masukkan total tagihan: ");
    scanf("%f", &totalTagihan);

    printf("Masukkan jumlah orang: ");
    scanf("%d", &jumlahOrang);

    if (jumlahOrang <= 0) {
        printf("Jumlah orang tidak valid!\n");
        return;
    }
    float perOrang = totalTagihan / jumlahOrang;
    
    printf("\nHASIL\n");
    printf("Total tagihan : Rp %.2f\n", totalTagihan);
    printf("Jumlah orang  : %d\n", jumlahOrang);
    printf("Per orang     : Rp %.2f\n", perOrang);

}

void bungaTabungan(){
    float saldoAwal, bungaPersen, totalBunga, totalAkhir;

    printf("\n---Kalkulator Bunga Tabungan Sederhana---\n");

    //Input dari pengguna
    printf("Masukkan saldo awal : ");
    scanf("%f", &saldoAwal);

    printf("Masukkan persentase bunga bulanan : ");
    scanf("%f", &bungaPersen);

    //Logika perhitungan
    totalBunga = saldoAwal * (bungaPersen / 100);
    totalAkhir = saldoAwal + totalBunga;

    //Output hasil
    printf("\nTotal bunga bulan ini : Rp %.2f\n", totalBunga);
    printf("\nSaldo akhir : Rp %.2f\n", totalAkhir);
}

void sisaUangJajan() {
    float uangAwal, totalPengeluaran, pengeluaran;
    int jumlahItem;
    char namaItem[50];

    printf("\n=== KALKULATOR SISA UANG JAJAN ===\n");
    printf("Masukkan uang jajan awal: Rp ");
    scanf("%f", &uangAwal);

    printf("Berapa banyak pengeluaran yang ingin dicatat? ");
    scanf("%d", &jumlahItem);

    totalPengeluaran = 0;

    printf("\n--- Detail Pengeluaran ---\n");
    for (int i = 1; i <= jumlahItem; i++) {
        printf("Nama pengeluaran ke-%d: ", i);
        scanf(" %s", namaItem);
        printf("Jumlah biaya untuk %s: Rp ", namaItem);
        scanf("%f", &pengeluaran);

        if (pengeluaran < 0) {
            printf("Pengeluaran tidak boleh negatif! Dilewati.\n");
            continue;
        }

        totalPengeluaran += pengeluaran;
    }

    float sisaUang = uangAwal - totalPengeluaran;

    printf("\n--- Ringkasan ---\n");
    printf("Uang Awal       : Rp %.2f\n", uangAwal);
    printf("Total Pengeluaran: Rp %.2f\n", totalPengeluaran);
    printf("Sisa Uang Jajan : Rp %.2f\n", sisaUang);

    if (sisaUang < 0) {
        printf("Peringatan: Pengeluaran melebihi uang jajan sebesar Rp %.2f!\n", -sisaUang);
    } else if (sisaUang == 0) {
        printf("Uang jajan habis pas!\n");
    } else {
        printf("Kamu masih punya sisa uang jajan. Hemat terus!\n");
    }
}
