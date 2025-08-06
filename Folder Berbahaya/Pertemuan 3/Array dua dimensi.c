// Array dua dimensi 
#include <stdio.h>

int main()
    {
    int A[3] [5];   // deklarasi array dua dimensi
    int i,j,k;
    k=0;
    
       // memasukan data dalam array dua dimensi
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
            A[i][j] = k + 2;
            k+=2;
        }   // end for loop j
    }    // end for loop i
    
       // menampilkan kembali array dua dimensi
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
        printf("A[%i,%i] = %i\n",i,j,A[i][j]);
        }   // end for loop j
    }   // end for loop i
    
    printf("Tekan Enter...");
}
