#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0, L;
    double yi, yi1, e;
    printf("podaj liczbe ktorej chcemy obliczyc pierwiastek= ");
    do
        scanf("%d",&L);
    while(L<=0);
    printf("podaj niedokladnosc,ktora chcemy osiagnac= ");
    scanf("%lf",&e);
    yi1=L/2.0;
    do
    {
        yi=yi1;
        yi1=(1/2.0)*(yi+L/yi);
    }
    while(fabs(yi1-yi)>=e);
    printf("pierwiastek jest rowny w przyblizeniu= %.16f", yi1);
    printf("pierwiastek bez przyblizenia= %f",sqrt(L));
    return 0;
}
