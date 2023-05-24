#include <stdio.h>

int main()
{
     // dizimizin eleman sayısını belirliyoruz.
     int n;
     printf("dizinin eleman sayisini giriniz. : ");
     scanf("%d",&n);
     printf("olusturulacak dizi %d elemanli \n",n);
     int dizi[n];
     int toplam = 0;

     // dizi elemanları girilecek.
     for (int i = 0; i<n; i++)
     {
          printf( "%d. elemani giriniz= ", i );
          scanf( "%d", &dizi[i] );
     }
     
     // dizi elemanlarını toplama işlemi.
     int i=0;
     while(i<n)
     {
          toplam = toplam + dizi[i]; 
          // veya toplam += dizi[i];
          i++;
     }
     
     printf("Dizinin elemanlari toplami : %d", toplam);
}