// input angka + / -
#include <stdio.h>

int main() {
    int a = -3;
    if(a>0 && a%2 == 0){
        printf("%d adalah bilangan POSIITF\n", a);
        printf("%d adalah bilangan GENAP", a);
    }else if(a>0 && a%2==1){
        printf("%d adalah bilangan POSITIF\n", a);
        printf("%d adalah bilangan GANJIL", a);
    }else if(a<0 && a%2==0){
        printf("%d adalah bilangan NEGATIF\n", a);
        printf("%d adalah bilangan GENAP", a);
    }else{
        printf("%d adalah bilangan NEGATIF\n", a);
        printf("%d adalah bilangan GANJIL", a);
    }
    printf("\nSelesai");
}