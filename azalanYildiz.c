#include <stdio.h>
int main()
{
    int i,j,karakter=0;
     printf("lutfen bir sayi girinzi:");
     scanf("%d",&karakter);
     for ( i = 1; i <= karakter; i++) /*buradaki for satırı belirler satırlar artıyor ama yıldızlar azalıyor!*/
     {
        for ( j = karakter; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
     }
     return 0;
    }
     