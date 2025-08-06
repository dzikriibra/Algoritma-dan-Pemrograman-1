// Modul Pemrograman
#include <stdio.h>

double absolute(double x);

int main(){
    float nilai;
    nilai = -543.21;
    printf("%7.2f nilai mutlaknya adl %7.2f\n", nilai, absolute(nilai));
}

double absolute(double x){
    if(x<0){
        x = -x;
    }
    return (x);
}
