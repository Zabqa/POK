#include<stdio.h>

int main()
{
    int x, ilosc=0, suma=0, iloczyn=1, parz=0;
    double srednia;
    do
    {
        scanf("%d",&x);
        if(x>0)
        {
            suma+=x;
            ilosc++;
        }
        if(x<5 || x>10)
            iloczyn*=x;
        if(x%2==0 && x!=0)
            parz++;
    }
    while(x>=0);
    if(ilosc==0)
            printf("nie mozna wyznacyc sredniej arytmetycznej z liczb dodatnich, bo nie ma liczby dodatniej \n");
    else
    {
        srednia=(double)suma/ilosc;
        printf("srednia arytmetyczna dodatnich liczb= %f \n",srednia);
    }
    printf("iloczyn liczb spoza przedzialu [5,10]= %d \n",iloczyn);
    printf("ilosc parzystych liczb= %d",parz);
    return 0;
}
