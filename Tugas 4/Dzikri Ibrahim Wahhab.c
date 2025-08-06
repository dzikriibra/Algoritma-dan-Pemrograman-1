// Dzikri Ibrahim Wahhab
// 124111032
// Informatika

// Buatlah fungsi untuk menghitung frekuensi kemunculan huruf dalam sebuah kalimat

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Fungsi untuk menghitung frekuensi huruf dalam kalimat
void hitungFrekuensiHuruf(char *kalimat) {
    int frekuensi[26] = {0}; // Array untuk menyimpan frekuensi huruf (a-z)
    int i;

    // Iterasi setiap karakter dalam kalimat
    for (i = 0; kalimat[i] != '\0'; i++) {
        char huruf = kalimat[i];

        // Periksa apakah karakter adalah huruf alfabet
        if (isalpha(huruf)) {
            // Ubah ke huruf kecil agar konsisten
            huruf = tolower(huruf);
            // Tambahkan frekuensi berdasarkan indeks (0-25)
            frekuensi[huruf - 'a']++;
        }
    }

    // Menampilkan hasil frekuensi huruf
    printf("Frekuensi kemunculan huruf:\n");
    for (i = 0; i < 26; i++) {
        if (frekuensi[i] > 0) { // Cetak hanya huruf yang muncul
            printf("%c : %d\n", i + 'a', frekuensi[i]);
        }
    }
}

int main() {
    char kalimat[1000];

    // Input kalimat dari pengguna
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Panggil fungsi untuk menghitung frekuensi
    hitungFrekuensiHuruf(kalimat);

    return 0;
}

//  Buatlah fungsi untuk menentukan bilangan terkecil dari n buah bilangan yang dimasukan oleh user

//  Buatlah fungsi untuk mengubah nilai huruf ke bobotnya

int main(){
    
}
