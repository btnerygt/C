#include <stdio.h>
int main()
{
    int sayi1,sayi2,i,toplam=0;

    // sayı aralığımızı belirtiyoruz.
    printf("1. sayiyi giriniz. "); 
    scanf("%d",&sayi1); 
    printf("2. sayiyi giriniz. "); 
    scanf("%d",&sayi2); 

    // girilen sayılar toplama dahil değil.
    for(i=sayi1+1 ; i<sayi2 ; i++)
    {   
        toplam = toplam + i;
    } 

    printf("Sonuc : %d",toplam);
}