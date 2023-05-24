#include<stdio.h>

int main()
{	
    int sinir, sayi1 = 0, sayi2 = 1, sonraki;
    printf("kacinci basamakta islem dursun : ");
    scanf("%d", &sinir);
    
    for(int i=1;i<=sinir;i++)
    {
		printf("%d \n", sayi1);
		sonraki = sayi1 + sayi2;
		sayi1 = sayi2;
		sayi2 = sonraki;
    }
}