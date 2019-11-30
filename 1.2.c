#include<stdio.h>

int main()
{
    int pow=1;
    double x,x1=1,dl,xp,xk;
    printf("przedzial od xp do xk");
    scanf("%lf",&xp);
    do
    {
        scanf("%lf",&xk);
    }
    while(xk<=xp);
    do
    {
        scanf("%lf",&x);
    }
    while(x<xp || x>xk);
    x1=x;
    do
    {
        dl=x*x1-x1;
        printf("x^%d = %f \n",pow,x1);
        x1*=x;
        pow++;
        if(dl<=0)
            printf("delta x pomiedzy krokami > 0");
    }
    while(dl>0 && pow<=3);
    return 0;
}
