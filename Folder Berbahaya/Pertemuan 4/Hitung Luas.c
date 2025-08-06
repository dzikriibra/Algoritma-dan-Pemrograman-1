// Dzikri Ibrahim Wahhab 
// 124111032
// Informatika

#include <stdio.h>

void hitungpp();
void hitungseti();
void hitungling();
void hitungjage();
int ht2bil();
float ht3bil(float a, int b, int c);
    
int main(){
    int pil;
    
    printf("=== Menghitung Luas Bangun ===\n");
    printf("1. Hitung Luas Persegi Panjang\n");
    printf("2. Hitung Luas Segitiga\n");
    printf("3. Hitung Luas Lingkaran\n");
    printf("4. Hitung Luas Jajargenjang\n");
    
    printf("Pilih 1 - 4: ");
    scanf("%i", &pil);
    
    switch(pil){
        case 1 : hitungpp();
        break;
        case 2 : hitungseti();
        break;
        case 3 : hitungling();
        break;
        case 4 : hitungjage();
        break;
        
    }
    return 0;
}

void hitungpp(){
    int p, l, luas;
    
    printf("=== Hitung Luas Persegi Panjang ===\n");
    
    printf("Masukan panjangnya: ");
    scanf("%i", &p);
    
    printf("Masukan lebarnya: ");
    scanf("%i", &l);
    
    luas = ht2bil(p, l);
    printf("luas persegi panjang adalah %i", luas);
}

void hitungseti(){
    int a, t;
    float luas;
    
    printf("=== Hitung Luas Segitiga ===\n");
    
    printf("Masukan alasnya: ");
    scanf("%i", &a);
    
    printf("Masukan tingginya: ");
    scanf("%i", &t);
    
    luas = ht3bil(0.5, a, t);
    printf("Luas segitiga adalah %.1f", luas);
}

void hitungling(){
    float luas;
    int r;
    
    printf("=== Hitung Luas Lingkaran ===\n");
    
    printf("Masukan jari-jari: ");
    scanf("%i", &r);
    
    luas = 3.14*r*r;
    printf("Luas lingkaran adalah %.2f", luas);
}

void hitungjage(){
    int a, t, luas;
    
    printf("Masukan alasnya: ");
    scanf("%i", &a);
    
    printf("Masukan tingginya: ");
    scanf("%i", &t);
    
    luas = ht2bil(a, t);
    printf("Luas jajargenjang adalah %i", luas);
}

int ht2bil(int a, int b){
    int hasil = a*b;
    return hasil;
}

float ht3bil(float a, int b, int c){
    float hasil = a*b*c;
    return hasil;
}