#include <stdio.h>
int us(int sayi, int us) 
{ 
    int i, j = 1; 
    for (i=1; i<= us; i++) 
        j = j*sayi; 
    return j;
}
int main() 
{ 
    int sayi, sonuc = 0, yedek, basamak_degeri, basamak_kontrol = 0; 
    printf("Sayi giriniz: \n"); 
    scanf("%d", &sayi); 
    yedek = sayi; 
    while (yedek != 0) 
    { 
        basamak_kontrol++; 
        yedek = yedek/10; 
    } 
    yedek = sayi; 
    while (yedek != 0) 
    { 
        basamak_degeri = yedek%10; 
        sonuc = sonuc + us(basamak_degeri, basamak_kontrol); 
        yedek = yedek/10; 
    } 
    if (sayi == sonuc) 
        printf("%d sayisi armstrong sayidir.\n", sayi); 
    else 
        printf("%d sayisi armstrong sayi degildir.\n", sayi); 
    return 0; 
} 


