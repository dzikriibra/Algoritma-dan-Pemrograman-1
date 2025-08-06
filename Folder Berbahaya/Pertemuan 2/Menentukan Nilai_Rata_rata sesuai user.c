// Menentukan Nilai_Rata_rata sesuai user.c
// Menerima 3 angka dan menampilkan rata-ratanya
#include <stdio.h>
int main ()
{
    // deklarasi variabel yang digunakan
    float jumlah;
    int bilangan;
    int bagi;
    float x;
    float rerata;
    
    // inisialisasi variabel jumlah
    jumlah = 0;
    
    // inisisalisasi variabel pencacah bilangan
    printf("Masukan jumlah inputan ");
    scanf("%i", &bilangan );
    bagi = bilangan; 
    
    while (bilangan > 0 )
    {
        // meminta inputan dari user
        printf(" masukan angka : ");
        scanf("%f", &x);
    
        // menjumlahkan angka yang diinputkan
        jumlah = jumlah + x;
    
        // mengurangkan pencacah untuk mencapai
        // kondisi berhenti
        bilangan = bilangan - 1 ;
    }
        // menghitung rata-rata dari 3 inputan angka
        rerata = jumlah / bagi;
    
        // menampilkan hasil rata-rata
        printf("Rerata : %.2f", rerata);
    
}