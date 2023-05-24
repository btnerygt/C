#include <stdio.h>

int main()
{
    int i, j;
    // 10x10 luk çarpım tablosu
    for (i=1; i <= 10; i++){
        for (j=1; j <= 10; j++){
            printf("%d x %d : %d\t",i, j, i*j);
        }
        printf("\n");
    }
}