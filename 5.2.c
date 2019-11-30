#include<stdio.h>
#include<math.h>

int main()
{
    double ai,ai1=1,ai2=1.5,ai3=2;
    int N,i;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        ai=ai1*sqrt(ai2+ai3);
        printf("%d wyraz = %f\n",i,ai);
        ai3=ai2;
        ai2=ai1;
        ai1=ai;
    }
    return 0;
}
