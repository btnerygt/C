#include<stdio.h>

int main(){
	
    int satir,sayi=1;

    printf("Satir sayisini giriniz. : ");
    scanf("%d",&satir);

    for(int i=0; i<satir; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%d ", sayi);
            sayi++;
        }
        printf("\n");
    }
}