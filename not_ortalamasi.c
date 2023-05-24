#include <stdio.h>
 
int main()
{
    int vize;
    int final;
    double not;
     
    printf("Vize notunu giriniz: ");
    scanf("%d",&vize);
    printf("Final notunu giriniz: ");
    scanf("%d",&final);
     
    not = (vize * 0.4) + (final * 0.6);
     
    printf("Yil sonu notu = %.2f \n",not);

    // not koşullarını istediğiniz gibi düzenleyebilirsiniz 
    if(not<=100 && not>=90)
    {
        printf("Dersi AA ile gectiniz.");
    }
    if(not<=89 && not>=85)
    {
        printf("Dersi BA ile gectiniz.");
    }
    if(not<=84 && not>=80)
    {
        printf("Dersi BB ile gectiniz.");
    }
    if(not<=79 && not>=75)
    {
        printf("Dersi CB ile gectiniz.");
    }
    if(not<=74 && not>=70)
    {
        printf("Dersi CC ile gectiniz.");
    }
    if(not<=69 && not>=65)
    {
        printf("Dersi DC ile gectiniz.");
    }
    if(not<=64 && not>=60)
    {
        printf("Dersi DD ile gectiniz.");
    }
    if(not<=59 && not>=50)
    {
        printf("Dersi FD ile gectiniz.");
    }
    if(not<=49 && not>=0)
    {
        printf("FF , uzgunum dersten kaldiniz.");
    }
}