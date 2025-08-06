// pemakaian switch
#include <stdio.h>

int main() {
    int hari = 4;
    printf("Hari ini adalah hari ");
    switch(hari){
        case 1: printf("Minggu");
           break;
        case 2: printf("Senin");
           break;
        case 3: printf("Selasa");
           break;
        case 4: printf("Rabu");
           break;   
        case 5: printf("Kamis");
           break;
        case 6: printf("Jum'at");
           break;   
        case 7: printf("Sabtu");
           break;   
        default:
           printf("Jumlah hari tidak lebih dari 7");
    }
    printf("\n");
}
    