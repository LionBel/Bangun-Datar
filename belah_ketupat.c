#include <stdio.h>

int main()
{
    float diagonal_vertikal, diagonal_horizontal, luas;
    printf("Masukkan diagonal vertikal belah ketupat: ");
    scanf("%f", &diagonal_vertikal);
    printf("Masukkan diagonal horizontal belah ketupat: ");
    scanf("%f", &diagonal_horizontal);
    
    luas = diagonal_vertikal * diagonal_horizontal * 0.5 ;
    printf("Luas belah ketupat: ");
    printf("%.2f", luas);
    
    return 0;
}
