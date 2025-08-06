#include <stdio.h>

// Fungsi untuk memeriksa apakah waktu valid (format 24 jam)
int isValidTime(int hour, int minute) {
    return (hour >= 9 && hour < 22) && (minute >= 0 && minute < 60);
}

int main() {
    int hour, minute;
while(1){
    printf("Masukkan jam untuk reservasi (0-21): ");
    scanf("%d", &hour);

    printf("Masukkan menit untuk reservasi (0-59): ");
    scanf("%d", &minute);

    if (isValidTime(hour, minute)) {
        printf("Reservasi berhasil pada pukul %02d:%02d.\n", hour, minute);
        break;
    } else {
        printf("Waktu yang dimasukkan tidak valid. Silakan coba lagi.\n");
    }
}
    return 0;
}