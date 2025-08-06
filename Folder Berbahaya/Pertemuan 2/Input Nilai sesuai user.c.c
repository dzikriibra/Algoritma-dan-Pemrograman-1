//Input Nilai sesuai user.c
// User diminta untuk input nilai sebanyak 3 kali
#include <stdio.h>
int main()
{
    int i; // deklarasi pencacah 
    int nilai;
    int x;
    i=1; // inisialisasi pencacah
        printf("Masukan jumlah nilai yang akan diinput : ");
        scanf("%i",&x);
    do
    {
        printf("Nilai Mahasiswa ke-%d adalah : ", i);
        scanf("%d", &nilai); // input nilai dari user
        i++; // penambahan nilai pencacah
    }
    while (i<=x); // kondisi berhenti
}