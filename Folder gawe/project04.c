#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isKabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

bool isValidTanggal(char tanggal[], char bulan[], char tahun[]) {
    int t = atoi(tanggal);
    int b = atoi(bulan);
    int y = atoi(tahun);

    if (b < 1 || b > 12) {
        return false; // Bulan tidak valid
    }

    // Validasi jumlah hari berdasarkan bulan
    switch(b) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return t >= 1 && t <= 31; // Bulan dengan 31 hari
        case 4: case 6: case 9: case 11:
            return t >= 1 && t <= 30; // Bulan dengan 30 hari
        case 2:
            if (isKabisat(y)) {
                return t >= 1 && t <= 29; // Februari pada tahun kabisat
            } else {
                return t >= 1 && t <= 28; // Februari pada tahun non-kabisat
            }
        default:
            return false; // Bulan tidak valid
    }
}

bool isValidJam(char jam[], char menit[]) {
    int j = atoi(jam);
    int m = atoi(menit);
    
    return (j >= 9 && j <= 21) && (m >= 0 && m < 60);
}

int main() {
    char tanggal[3]; // Untuk menyimpan tanggal (DD)
    char bulan[3];   // Untuk menyimpan bulan (MM)
    char tahun[5];   // Untuk menyimpan tahun (YYYY)
    char jam[3];     // Untuk menyimpan jam (HH)
    char menit[3];   // Untuk menyimpan menit (MM)

    while(1) {
        // Meminta input dari pengguna
        printf("Masukkan tanggal (DD): ");
        scanf("%2s", tanggal);

        printf("Masukkan bulan (MM): ");
        scanf("%2s", bulan);

        printf("Masukkan tahun (YYYY): ");
        scanf("%4s", tahun);

        printf("Masukkan jam (HH): ");
        scanf("%2s", jam);
        
        printf("Masukkan menit (MM): ");
        scanf("%2s", menit);

        // Validasi tanggal dan waktu
        if(isValidTanggal(tanggal, bulan, tahun) && isValidJam(jam, menit)) {
            printf
            ("Reservasi berhasil divalidasi pada tanggal %02s/%02s/%s jam %02s:%02s\n", tanggal, bulan, tahun, jam, menit);
            break;
        } else {
            printf("Tanggal/Bulan/Tahun atau waktu yang dimasukkan tidak valid. Silakan coba lagi.\n");
        }
    }

    return 0;
}
