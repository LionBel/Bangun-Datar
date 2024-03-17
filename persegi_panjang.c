#include <stdio.h>

int main()
{
    int panjang, lebar, luas;
    printf("Masukkan panjang persegi panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar persegi panjang: ");
    scanf("%d", &lebar);
    
    luas = panjang * lebar;
    printf("Luas persegi panjang: ");
    printf("%d", luas);
    
    return 0;
}

