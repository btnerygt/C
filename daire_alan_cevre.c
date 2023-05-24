#include <stdio.h>

int main()
{
	int yaricap;
	float pi=3.14, alan, cevre;

     
	printf("Dairenin yaricapini giriniz : "); 
	scanf("%d",&yaricap);

 
	alan = pi * yaricap * yaricap; 
	printf("Dairenin alani : %.2f \n",alan);

	cevre = 2 * pi * yaricap;     
	printf("Dairenin cevresi : %.2f", cevre);
}