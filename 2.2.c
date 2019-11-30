#include<stdio.h>

int main()
{
    int N, i;
    double suma=0, sumad=0,sumau=0, ilosc=0, x;
    do
    {
        scanf("%d",&N);
    }
    while(N<1);
    for(i=0; i<N; i++)
    {
        scanf("%lf",&x);
        suma+=x;
        if(x<0)
        {
            sumau+=x;
            ilosc++;
        }
        if(x>0)
            sumad+=x;
    }
    x=suma/i;
    sumau/=ilosc;
    printf("suma wszystkich liczb jest rowna %f \n",suma);
    printf("suma wszystkich liczb dodatnich jest rowna %f \n",sumad);
    printf("srednia arytmetyczna wszystkich liczb jest rowna %f \n",x);
    printf("srednia arytmetyczna wszystkich liczb ujemnych jest rowna %f \n",sumau);
    return 0;
}
