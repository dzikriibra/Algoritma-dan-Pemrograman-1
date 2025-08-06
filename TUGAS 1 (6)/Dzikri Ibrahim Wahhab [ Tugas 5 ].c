// Dzikri Ibrahim Wahhab
// 124111032
#include <stdio.h>

int main() {
    int total;
    
    printf("masukan total penjualan\n");
    scanf("%d", &total);
    if(total>2){
        printf("Bonus 1 jt");
    }else if(total==2){
        printf("Bonus 500 ribu");
    }else{
    printf("tidak dapat bonus");
    }
}

