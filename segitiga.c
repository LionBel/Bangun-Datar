#include <stdio.h>

int main()
{
    float alas, tinggi, luas;
    printf("Masukkan alas persegi panjang: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi persegi panjang: ");
    scanf("%f", &tinggi);
    
    luas = alas * tinggi * 0.5 ;
    printf("Luas segitiga: ");
    printf("%.2f", luas);
    
    return 0;
}
