// Dzikri Ibrahim Wahhab
// 124111032
#include <stdio.h>

int main() {
    int a = -8;
    if(a>0){
        printf("%d adalah bilangan POSIITF\n", a);
      if(a%2==0){    
        printf("%d adalah bilangan GENAP", a);
      }else{
        printf("%d adalah bilangan GANJIL", a);
      }
    } else{
        printf("%d adalah bilangan NEGATIF\n", a);
      if(a%2==0){    
        printf("%d adalah bilangan GENAP", a);
     }else{
        printf("%d adalah bilangan GANJIL", a);
     }
    }
    printf("\nSelesai");
}