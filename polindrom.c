#include<stdio.h>

int main()
{ 
    int sayi, ters=0, yedek, yedekters; 
    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);
    
    yedek = sayi;
    while(yedek>0)
    {
        yedekters = yedek%10;
        ters = (ters*10) + yedekters;
        yedek = yedek/10;
    }
    if(ters == sayi)
        printf("%d sayisi palindromdur.",sayi);
    else
        printf("%d sayisi palindrom degildir.",sayi);
}