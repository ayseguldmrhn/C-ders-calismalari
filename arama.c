#include <stdio.h>
int main()
{
    int a[7]={5,9,87,56,32,10,100};
    int i,arananSayi;
    printf("Hangi sayiyi ariyorsunuz ?:");
    scanf("%d",&arananSayi);
    for(int i=0;i<7;i++){
        if(arananSayi==a[i]){
        printf("true\n");
        break;
    }
}
 if(i==7){   /*son elemanda da bulamadı ama bir kez daha artırdı sonra 7<7 olmadığı için hata oldu*/
        printf("false\n");
}
    return 0;
}

