// Dzikri Ibrahim Wahhab
// 124111032
#include <stdio.h>

int main() {
    int hari;
    printf("Hari ini adalah hari ");
    scanf("%d", &hari);
    switch(hari){
        case 1: printf("%d adalah hari Minggu, Libur", hari);
           break;
        case 2: printf("%d adalah hari Senin, Kuliah", hari);
           break;
        case 3: printf("%d adalah hari Selasa, Kuliah", hari);
           break;
        case 4: printf("%d adalah hari Rabu, Kuliah", hari);
           break;   
        case 5: printf("%d adalah hari Kamis, Kuliah", hari);
           break;
        case 6: printf("%d adalah hari Jum'at, Kuliah", hari);
           break;   
        case 7: printf("%d adalah hari Sabtu, Libur", hari);
           break;   
        default:
           printf("Jumlah hari tidak lebih dari 7");
    }
    printf("\n");
}
    