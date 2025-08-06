// Array in Alpro

#include <stdio.h>

int main()
{
    int A[5];     // deklarasi array A dengan 5 elemen
    int i;
    A[0] = 4;     // simpan 4 dalam array A indeks 0
    A[1] = 8;
    A[2] = 6;
    A[3] = A[0]+A[1];
    A[4] = A[2];
        // menampilkan kembali nilai dalam array
    for(i=0;i<=4;i++) // for digunakan untuk menampilkan semua index
    {
        printf("A[%i] = %i\n", i, A[i]);
    }
    printf("Tekan Enter...");
}