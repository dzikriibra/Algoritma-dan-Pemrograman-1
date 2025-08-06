// input sesuai user dgn (=)
#include <stdio.h>

int main() {
    int x;
    int y;
    
    printf("input x\n");
    scanf("%d", &x);
    printf("input y\n");
    scanf("%d", &y);
    if(x>y){
    printf("x lebih besar dari y", x, y);
    }
    else if(y>x){
        printf("y lebih besar dari x", y, x);
    }
    else{
        printf("y sama dengan x");
    }
    printf("\nSelesai");
}