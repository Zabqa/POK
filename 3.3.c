#include<stdio.h>

int main()
{
    int N, i;
    double x, y;
    printf("podaj wartosc x: ");
    scanf("%lf",&x);
    printf("podaj N: ");
    scanf("%d",&N);
    for(i=-5; i<=N; i++)
    {
        if(x<0)
        {
            if(i%2==0 && i<0)
                printf("\nnie da sie policzyc");
            else
            {
                if(i<0)
                {
                    y=(-pow(-x,-1/i))*sin(i*x);
                    printf("\n%f",y);
                }
                else
                {
                    y=(-pow(-x,i))*sin(i*x);
                    printf("\n%f",y);
                }
            }
        }
        else
        {
            y=pow(x,i)*sin(x*i);
            printf("\n%f",y);
        }
    }
    return 0;
}
