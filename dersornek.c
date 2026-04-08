#include <stdio.h>
int main()
{
    int array[5];
    int max,min,i,indexMax,indexMin;
    for(int i=0;i<5;i++){
        printf("%d, 5 sayi giriniz:\n");
        scanf("%d",&array[i]);
    }
    max=array[0];/*ilk elemanı max eleman olarak alalım sonra tüm elemanları for döngüsüyle karşılaştırırız*/

    for(int i=0;i<5;i++){
        if(array[i]>max){
            max=array[i];
            indexMax=i;
        }
        if(array[i]<min){
            min=array[i];
            indexMin=i;
        }
    }

    
    printf("en buyuk sayi:%d\n",max);
    printf("en buyuk sayinin indeksi %d\n",indexMax);
    printf("en kucuk sayi:%d\n",min);
    printf("en kucuk sayinin indeksi %d\n",indexMin);
    return 0;
    }