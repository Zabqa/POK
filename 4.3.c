#include<stdio.h>
#include<math.h>

int main()
{
    double e, q, wynik;
    int n, p=-1, silnia, i;
    printf("podaj liczby n, q i e:");
    scanf("%d %lf %lf",&n ,&q ,&e);
    do
    {
        p++;
        silnia=1;
        for(i=p; i>1; i--)
        {
            silnia*=i;
        }
        if(p>0)
            wynik=(1/(float)silnia)*(pow((n-q),p-1)*exp(n*q));
        else
            wynik=(1/(float)silnia)*((n-q)*exp(n*q));
    }
    while(wynik>=e);
    printf("\nnierownosc jest spelniona dla p= %d",p);
    printf("\nnierownosc jest spelniona dla p!= %d",silnia);
    return 0;
}
