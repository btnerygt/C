#include <stdio.h>
int main()
{
    double boy,kilo,indeks;

    printf("Kilonuz : "); 
    scanf("%lf",&kilo);
    printf("Metre Cinsinden Boyunuz : ");
    scanf("%lf",&boy);

    indeks=kilo/(boy*boy);

    printf("Vucut kitle indeksiniz : %lf \n", indeks);
    if(indeks<18.5)
        printf("ideal kilonun altinda");
    else if(indeks>=18.5 && indeks<=24.9)
        printf("ideal kiloda");
    else if(indeks>=25 && indeks<=29.9)
        printf("ideal kilonun ustunde");
    else if(indeks>=30 && indeks<=39.9)
        printf("ideal kilonun cok ustunde - obez");
    else if(indeks>=40)
        printf("ideal kilonun cok ustunde - morbid obez");
    else
        printf("lutfen gecerli degerler giriniz.");
}