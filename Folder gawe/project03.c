#include <stdio.h>
#include <stdbool.h>

// Fungsi untuk mengecek apakah sebuah tahun adalah tahun kabisat
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

// Fungsi untuk memeriksa apakah tanggal valid
bool isValidDate(int day, int month, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Cek tahun valid
    if (year < 1) {
        return false;
    }

    // Cek bulan valid
    if (month < 1 || month > 12) {
        return false;
    }

    // Jika bulan Februari dan tahun kabisat, set jumlah hari menjadi 29
    if (month == 2 && isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    // Cek tanggal valid
    if (day < 1 || day > daysInMonth[month]) {
        return false;
    }

    return true;
}

// Fungsi untuk memeriksa apakah waktu valid 
int isValidTime(int hour, int minute) {
    return (hour >= 9 && hour <= 20) && (minute >= 0 && minute < 60);
}

int main() {
    int day, month, year;
    int hour, minute;

    while (1){
    // Input tanggal
    printf("Masukkan tanggal (DD): ");
    scanf("%d", &day);

    printf("Masukan bulan (MM): ");
    scanf("%d", &month);

    printf("Masukan tahun (YYYY): ");
    scanf("%d", &year);

    printf("Masukkan jam untuk reservasi (09-21): ");
    scanf("%d", &hour);

    printf("Masukkan menit untuk reservasi (0-59): ");
    scanf("%d", &minute);


    // Cek validasi tanggal, bulan ,tahun, jam dan menit
    if(isValidDate(day, month, year) && isValidTime(hour, minute)){
        printf("Reservasi berhasil divalidasi pada tanggal %02d/%02d/%d jam %02d:%02d\n", day, month, year, hour, minute);
        break;
    }
    else(isValidDate(day, month, year) && isValidTime(hour, minute)); {
        printf("Tanggal/Bulan/Tahun atau waktu yang dimasukkan tidak valid. Silakan coba lagi.\n");
    }
  }
    return 0;
}