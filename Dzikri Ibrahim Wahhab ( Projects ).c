// praktek alpro
#include <stdio.h>

int main(){
    char nama[30];
    printf("Input nama : ");
    scanf("%[^\n]", nama);

    int NPM;
    printf("Input NPM : ");
    scanf("%i", &NPM);

    int no_telp;
    printf("Input no_telp : ");
    scanf("%d", &no_telp);

    char jurusan[20];
    printf("Input jurusan : ");
    scanf("%s", jurusan);

    int usia;
    printf("Input usia : ");
    scanf("%d", &usia);

    char jenis_kelamin[10];
    printf("Input jenis_kelamin : ");
    scanf("%s", jenis_kelamin);

    printf("Halo, %s dengan NPM: %i No telp: %d Kuliah di UNIBI jurusan %s, dan berusia %d, jenis_kelamin %s", nama, NPM, no_telp, jurusan, usia, jenis_kelamin);
}
