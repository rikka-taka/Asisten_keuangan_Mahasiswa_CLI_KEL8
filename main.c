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
