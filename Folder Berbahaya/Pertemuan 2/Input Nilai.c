//Input Nilai.c
// User diminta untuk input nilai sebanyak 3 kali
#include <stdio.h>
int main()
{
    int i; // deklarasi pencacah 
    int nilai;
    i=1; // inisialisasi pencacah
    do
    {
        printf("Nilai Mahasiswa ke-%d adalah : ", i);
        scanf("%d", &nilai); // input nilai dari user
        i++; // penambahan nilai pencacah
    }
    while (i<=3); // kondisi berhenti
}