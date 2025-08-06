// char nama
#include <stdio.h>

int main(){
    char nama[10];
    printf("inputkan nama anda : ");
    scanf("%[^\n]", nama);
    printf("\n Halo, %s ", nama);
}
// jika dalam scanf hanya %s maka nama yg dispasi tidak akan muncul namun jika memakai %[^\n] maka nama yg terpisah dgn spasi akan muncul