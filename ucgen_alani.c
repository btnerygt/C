#include <stdio.h>

int main()
{
	int taban,yukseklik;
	float alan,carpim;
	
	     
	printf("Ucgenin tabanini giriniz : ");  
	scanf("%d",&taban);
	 
	printf("Ucgenin yuksekligini giriniz : ");
	scanf("%d",&yukseklik);
	carpim = taban * yukseklik;
	alan = carpim / 2;
	printf("Ucgenin alani : %.2f",alan);
}