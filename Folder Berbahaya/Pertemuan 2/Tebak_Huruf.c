// Tebak_Huruf.c
// User memasukan sebuah karakter untuk menebak
#include <stdio.h>
int main ()
{
    // deklarasi variabel untuk menerima input
    char huruf;
    
    // menginisialisasi huruf awal untuk di cek
    printf("Tebakan : " );
    scanf("%s", &huruf);
    
    //pengecekan kondisi terhadap huruf inputan
    while (huruf!='d')
    {
        // jika huruf bukan 'q' maka input huruf lain
        printf("Maaf Anda Salah");
        printf("\nTebakan : ");
        scanf("%s", &huruf);
    }
    // jika huruf = 'q' maka tidak masuk ke while
    printf("Anda Benar");
}