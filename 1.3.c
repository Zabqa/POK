#include<stdio.h>
#include<math.h>

int main()
{
    double fx, x, dl, a, b, i, max, srednia, suma=0;
    int licznik=0,miejsce;
    printf("podaj przedzial od a do b: ");
    scanf("%lf",&a);
    do
        scanf("%lf",&b);
    while(b<=a);
        printf("\npodaj delte: ");
    do
        scanf("%lf",&dl);
    while(dl<=0);
    x=a;
    for(i=0; i<=(b-a); i+=dl)
    {
        licznik++;
        if(x<-0.0000000001)
            fx=-pow(-x,3)+1/x;
        else
        if(x>0.00000000001)
            fx=pow(sin(sqrt(x)),1/3.0);
        else
            fx=3*sqrt(2.0);

        if(i==0)
        {
            max=fx;
            miejsce=licznik;
        }
        if(fx>max)
        {
            max=fx;
            miejsce=licznik;
        }
        suma+=fx;
        printf("\n%d wartosc= %f",licznik,fx);
        x+=dl;
    }
    srednia=suma/licznik;
    printf("\n%d wartosc jest najwyzsza= %f",miejsce,max);
    printf("\nsrednia wszystkich liczb jest rowna= %f",srednia);
    return 0;
}
