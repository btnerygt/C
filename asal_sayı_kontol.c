#include <stdio.h>
int main()
{
    int sayi,asal=0;
    printf("Sayiyi girin : ");
    scanf("%d",&sayi);

    for(int i=2 ; i<sayi ; i++){
        if(sayi % i == 0)
        {
            asal++;
        }
    }
    
    if(asal==0)
    {
        printf("girilen sayi asal.");
    }
    else
    {
        printf("girilen sayi asal degil.");        
    }
}