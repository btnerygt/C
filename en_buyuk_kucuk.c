#include <stdio.h>
int main()
{
    int n;
    printf("Kac sayi gireceksin:\n");
    scanf("%d",&n); 
    int sayilar[n], max, min;
    for(int i=0 ; i<n ; i++)
    {
        printf("%d. sayiyi giriniz : ",i+1);
        scanf("%d", &sayilar[i]);
    }
    max = sayilar[0];
    min = sayilar[0];
    //max dan daha büyük bir sayı gelirse yeni max o olacaktır.
    //min den daha küçük bir sayı gelirse yeni min o olacaktır.
    for(int i=0 ; i<n ; i++)
    {
        if(max < sayilar[i])
        {
            max = sayilar[i]; 
        }
        if(min > sayilar[i])
        {
            min = sayilar[i]; 
        }
    }
    printf("Dizideki en buyuk sayi : %d \n", max);
    printf("Dizideki en kucuk sayi : %d", min);
}