#include <stdio.h>

int main()
{
    // kaç sayı girilecek belirliyoruz.
    int n;
    printf("kac adet sayi girilsin. : ");
    scanf("%d",&n);
    printf("%d adet sayi girdiniz \n",n);
    int sayi[n];
    int temp; // geçici sayıları tuttuğumuz yer.

     // sayılar girilecek.
    for (int i = 0; i<n; i++)
    {
        printf( "%d. elemani giriniz= ", i );
        scanf( "%d", &sayi[i] );
    } 
    // küçükten büyüğe sıralama
    for(int i=0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(sayi[j] < sayi[i]){
                temp = sayi[i];
                sayi[i] = sayi[j];
                sayi[j] = temp;
            }
        }
    }
    printf("kucukten buyuge siralama: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",sayi[i]);
    }
    printf("\n");
    // büyükten küçüğe sıralama
        for(int i=0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(sayi[j] > sayi[i]){
                temp = sayi[i];
                sayi[i] = sayi[j];
                sayi[j] = temp;
            }
        }
    }
    printf("buyukten kucuge siralama: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",sayi[i]);
    }

}
