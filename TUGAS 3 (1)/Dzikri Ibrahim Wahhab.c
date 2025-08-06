// Dzikri Ibrahim Wahhab 
// 124111032
// Informatika

#include <stdio.h>

int main()
{
    int input_pembelian;
    
    printf("Masukan jumlah pembelian: ");
    scanf("%i", &input_pembelian);
    
    char nama_barang[input_pembelian][50];
    int harga_barang[input_pembelian];
    int jumlah_barang[input_pembelian];
    int total_sementara[input_pembelian];
    int total_keseluruhan=0;
    
    for(int i=0; i<input_pembelian; i++)
    {
        printf("Masukan nama barang ke-%i: ", i + 1);
        scanf(" %s", nama_barang[i]);
        printf("Masukan harga barang: ");
        scanf(" %i", &harga_barang[i]);
        printf("Masukan total barang: ");
        scanf(" %i", &jumlah_barang[i]);
        
        total_sementara[i] = harga_barang[i]*jumlah_barang[i];
        printf("Total sementara: %i\n", total_sementara[i]);
    }
    
    for(int i=0; i<input_pembelian; i++)
    {
        total_keseluruhan += total_sementara[i];
    }
    for(int i=0; i<input_pembelian; i++)
    {
        printf("\nNama barang ke-%i: %s dengan harga: %i jumlah barang: %i total: %i", i + 1, nama_barang[i], harga_barang[i], jumlah_barang[i], total_sementara[i]);
    }
        printf("\nTotal keseluruhan: %i\n", total_keseluruhan);
}