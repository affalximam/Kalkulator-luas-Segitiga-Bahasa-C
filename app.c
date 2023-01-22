#include <stdio.h>
#include <stdlib.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){
    float alas, tinggi, hasil;
    char ulang;
    top:
    clear();
    printf("\n-----------------------------------\n");
    printf("Kalkulator menghitung luas Segitiga\n");
    printf("By : AFFALXIMAM\n");
    printf("-----------------------------------\n\n");

    printf("Masukan panjang alas segitiga (cm) : ");
    scanf("%f", &alas);
    printf("Masukan tinggi segitiga (cm) : ");
    scanf("%f", &tinggi);

    hasil = alas * tinggi / 2;
    printf("Luas Segitiga adalah (cm) : %.2f \n\n", hasil);

    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
    if(ulang == 'y'){
        clear();
        goto top;
    }
    if(ulang == 't'){
        printf("\nProgram Selesai");
    }
    else{
        goto cek;
    }
    return 0;
}