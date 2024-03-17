#include <stdio.h>

int main()
{
    float sisi_atas, sisi_bawah, tinggi, luas;
    printf("Masukkan sisi atas trapesium: ");
    scanf("%f", &sisi_atas);
    printf("Masukkan sisi bawah trapesium: ");
    scanf("%f", &sisi_bawah);
    printf("Masukkan tinggi trapesium: ");
    scanf("%f", &tinggi);

    luas = (sisi_atas + sisi_bawah) * tinggi * 0.5 ;
    printf("Luas trapesium: ");
    printf("%.2f", luas);
    
    return 0;
}
