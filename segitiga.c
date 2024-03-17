#include <stdio.h>

int main()
{
    float alas, tinggi, luas;
    printf("Masukkan alas segitiga: ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &tinggi);
    
    luas = alas * tinggi * 0.5 ;
    printf("Luas segitiga: ");
    printf("%.2f", luas);
    
    return 0;
}
