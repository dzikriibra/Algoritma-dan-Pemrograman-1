// Modul pemrograman 2
#include <stdio.h>

int faktorial(int n);

int main() {
    int n;
    int fak;
    printf("berapa faktorial? ");
    scanf("%d", &n);
    fak = faktorial(n);
    printf("%d faktorial = %d\n",n fak);
}

int faktorial(int n){
    int r;
    int f=1;
    if(n<=0){
        return 0;
    }
    for(i=2;i<=n;i++){
        f *=1;
    }
}