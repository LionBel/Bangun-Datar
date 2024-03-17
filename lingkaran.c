#include <stdio.h>

int main()
{
    float r, luas;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);
    
    luas = 3.14 * r * r;
    printf("Luas lingkaran: ");
    printf("%.2f", luas);
    
    return 0;
}

