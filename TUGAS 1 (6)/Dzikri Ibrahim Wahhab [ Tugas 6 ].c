// Dzikri Ibrahim Wahhab
// 124111032
#include <stdio.h>

int main() {
    int opsi;
    
    printf("1. Menghitung Luas Lingkaran\n");
    printf("2. Menghitung Luas Segitiga\n");
    printf("3. Menghitung Luas Persegi Panjang\n");
    printf("4. Menghitung Luas Jajargenjang\n");
    printf("Pilih opsi 1 - 4\n");
    scanf("%d", &opsi);
    
// Rumus luas lingkaran
float pi = 3.14;
float r;

// Rumus luas segitiga
int alas_segitiga;
int tinggi_segitiga;

// Rumus persegi panjang
int panjang;
int lebar;

// Rumus jajargenjang
int alas;
int tinggi;

switch(opsi){
    case 1: 
      printf("masukan jari-jari\n");
      scanf("%f", &r);
      
      printf("total luas lingkaran %f", pi*r*r);
    break;
    case 2:
      printf("masukan alas segitiga\n");
      scanf("%i", &alas_segitiga);
      printf("masukan tinggi segitiga\n");
      scanf("%i", &tinggi_segitiga);
      
      printf("total luas segitiga %f", 0.5*alas*tinggi_segitiga);
    break;
    case 3:
      printf("masukan panjang persegi panjang\n");
      scanf("%i", &panjang);
      printf("masukan lebar persegi panjang\n");
      scanf("%i", &lebar);
      
      printf("total luas persegi panjang %i", panjang*lebar);
    break;  
    case 4:
      printf("masukan alas jajargenjang\n");
      scanf("%i", &alas);
      printf("masukan tinggi jajargenjang\n");
      scanf("%i", &tinggi);
      
      printf("total luas jajargenjang %i", alas*tinggi);
    break;
    }
}