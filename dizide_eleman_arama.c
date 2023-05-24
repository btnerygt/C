#include <stdio.h>

int main()
{
    // dizimizin eleman sayısını belirliyoruz.
    int n;
    printf("dizinin eleman sayisini giriniz. : ");
    scanf("%d",&n);
    printf("olusturulacak dizi %d elemanli \n",n);
    int dizi[n];
    int sayi,bulundu=0,index;

     // dizi elemanları girilecek.
    for (int i = 0; i<n; i++)
    {
        printf( "%d. elemani giriniz= ", i );
        scanf( "%d", &dizi[i] );
    }

    printf("Dizide aradiginiz sayi nedir :"); scanf("%d",&sayi);
    
    for(int j=0 ; j<n ; j++)
    {
        // sayı bulunursa döngüden çıkar.
        if(dizi[j] == sayi){
            bulundu = 1;
            index = j+1;
            break;
        }
    }
    
    if(bulundu == 1)
        printf("%d sayisi dizinin %d. elemani.",sayi,index);
    else 
        printf("%d sayisi dizide yok.",sayi);
}