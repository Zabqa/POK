#include<stdio.h>

struct przedzial
{
    double a;
    double b;
};

int przedz(double a,double b,int k);
int main()
{
    FILE *p;
    p=fopen("D:\\Informatyka\\Informatyka C++\\labPok\\æwiczenie 7\\1.7.txt","r");
    int N=0,k,i,j,le=0;
    double l,min,max,dx;
    if(p==NULL)
        printf("blad");
    else
    {
        fscanf(p,"%lf",&l);
        max=l;
        min=l;
        k=1;
        while(fscanf(p,"%lf",&l)==1)
        {
            k++;
            if(min>l)
                min=l;
            if(max<l)
                max=l;
        }
        fclose(p);
//        printf("%f\n",max);
//        printf("%f\n",min);
//        printf("%d\n",k);
        printf("podaj ilosc przedzialow:\n");
        scanf("%d",&N);
        dx=(max-min)/(float)N;
//        printf("%f\n\n",dx);
        struct przedzial t[N];
        int w[N];
        for(i=0;i<N;i++)
        {
            t[i].a=min+dx*i;
            t[i].b=min+dx*(i+1);
        }
        t[N-1].b=max;
        for(i=0;i<N;i++)
        {
            w[i]=przedz(t[i].a,t[i].b,k);
//            printf("%d\n",w[i]);
            if(w[i]>le)
                le=w[i];
        }
//        printf("\n\n%d x",le);
//        printf(" %d\n\n",N);
        char tab[le][N];
        for(i=(le-1);i>=0;i--)
        {
            for(j=0;j<N;j++)
            {
                if(w[j]>=i+1)
                    tab[i][j]='#';
                else
                    tab[i][j]=32;
            }
        }
        for(i=(le-1);i>=0;i--)
        {
            for(j=0;j<N;j++)
            {
                printf("%c",tab[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
int przedz(double a,double b,int k)
{
    FILE *r;
    r=fopen("D:\\Informatyka\\Informatyka C++\\labPok\\æwiczenie 7\\1.7.txt","r");
    if(r==NULL)
        printf("blad");
    else
    {
        double l;
        int i,g=0;
        for(i=0;i<k;i++)
        {
            fscanf(r,"%lf",&l);
            if(l>=a && l<=b)
                g++;
        }
        fclose(r);
        return g;
    }
}
