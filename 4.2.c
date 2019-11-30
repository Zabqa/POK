#include<stdio.h>

int main()
{
    int ai, i=1, np, nk, naj1, naj2;
    printf("przedzial wyrazow ciagu od np do nk");
    do
    {
        scanf("%d",&np);
    }
    while(np<1);
    do
    {
        scanf("%d",&nk);
    }
    while(nk<=np);
    ai=-i*i+15*i+50;
    naj1=ai;
    ai=-np*np+15*np+50;
    naj2=ai;
    for(i=2; i<=nk; i++)
    {
        ai=-i*i+15*i+50;
        if(naj1>ai)
            naj1=ai;
        if(naj2>ai && i>np)
            naj2=ai;
    }
    printf("metoda porownania wszystkich wyrazow najmniejsza wartosc od 1 do nk= %d a do np do nk= %d",naj1,naj2);
    return 0;
}
