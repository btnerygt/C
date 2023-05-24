#include<stdio.h>
int main() 
{
    int satir, yazi=1;
    
    printf("Satir Sayisi Girin: ");
    scanf("%d", &satir);
    
    for (int i=0; i<satir; i++) {
    	
        for (int bosluk=1; bosluk <= satir-i; bosluk++)
            printf("  ");
            
        for (int j=0; j<=i; j++) {
            if (j==0 || i==0)
                yazi = 1;
            else
                yazi=yazi*(i-j+1)/j;
            printf("%4d", yazi);
        }
        
        printf("\n");
    }
}