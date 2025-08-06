//Dzikri Ibrahim Wahhab
// 124111032
// Informatika

#include <stdio.h>
int main()
{
    char nama_barang[50];
    char pilihan;
    int harga=0;
    int jumlah_barang = 0;
    int total_harga = 0;
  do
  {
      printf("Masukan Nama Barang : ");
      scanf("%s", nama_barang);
      
      printf("Masukan Harga : ");
      scanf("%i", &harga);
      
      printf("Masukan Jumlah Barang : ");
      scanf("%i", &jumlah_barang);
      
      total_harga+=harga*jumlah_barang;
      
      printf("Apakah ada barang yang anda beli lagi Y/T : ");
      scanf("%s", &pilihan);
  }
  while(pilihan == 'Y' || pilihan == 'y');
  
      printf("Total Harga = %d\n", total_harga);
}