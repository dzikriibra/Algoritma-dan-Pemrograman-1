// Array dua dimensi dan inputan
#include <stdio.h>

int main()
{
    // Deklarasi array untuk menyimpan data penjualan dan nama barang
    int penjualan[5];
    char nama_barang[5][30];
    int total_penjualan = 0;
    float ratarata_penjualan;
    
    // Input data penjualan dan nama barang dari pengguna
    for(int i=0; i<5; i++)
    {
        printf("Masukan nama barang ke-%d: ", i + 1);
        scanf("%s", nama_barang[i]);
        printf("Masukan jumlah penjualan untuk %s: ", nama_barang[i]);
        scanf("%d", &penjualan[i]);
    }
    
    // Menghitung total penjualan
    for(int i=0; i<5; i++)
    {
        total_penjualan += penjualan[i];
    }
    
    // Menghitung rata-rata penjualan
    ratarata_penjualan = total_penjualan / 5.0;
    
    // Menampilkan hasil 
    printf("\nPenjualan per Produk:\n");
    for(int i=0; i<5; i++)
    {
        printf("%s: %d\n", nama_barang[i], penjualan[i]);
    }
    printf("Total penjualan: %d\n", total_penjualan);
    printf("Rata rata penjualan: %.2f\n", ratarata_penjualan);
}
