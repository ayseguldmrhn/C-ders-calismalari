//yorum
#include <stdio.h>
int main()
{
    int a[7];
    printf("Yedi sayi giriniz:\n");
    for(int i=0;i<7;i++){
        scanf("%d\n",&a[i]); /*7 elemanlı dizi*/
    }
   
    
    for(int i=6;i>=0;i--){ /*dizinin tersten yazılması*/
        printf("%d\n",a[i]);
    }
    
    return 0;
}