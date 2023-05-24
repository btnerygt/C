#include <stdio.h>
int main()
{
    int sayi1,sayi2,i,toplam=0;

    // sayı aralığımızı giriyoruz.
    printf("1. sayiyi giriniz. "); 
    scanf("%d",&sayi1); 
    printf("2. sayiyi giriniz. "); 
    scanf("%d",&sayi2); 

    // girdiğimiz sayılar toplama dahil değil.
    i=sayi1 + 1;
    do{
        toplam = toplam + i;
        i++;
    }
    while(i<sayi2);

    printf("Sonuc : %d",toplam);
}