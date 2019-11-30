#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
    srand(time(NULL));
    FILE *p,*q,*h;
    p=fopen("1.7.txt","w");
    double x,y,s=0,dx;
    int N,i,a=0,b=1,w1=0,w2=0,w3=0;
    printf("podaj ilosc liczb:\n");
    scanf("%d",&N);
    double t[N];
    if(p==NULL)
        printf("blad");
    else
    {
        for(i=1;i<=N;i++)
        {
            x=a+(rand()+1.0)/(RAND_MAX+1.0)*(b-a);
            y=a+(rand()+1.0)/(RAND_MAX+1.0)*(b-a);
            x=sin(2*M_PI*y)*sqrt(-2*log(x));
            fprintf(p,"%f\n",x);
        }
        fclose(p);
    }
    q=fopen("1.7.txt","r");
    h=fopen("1.7raport.txt","w");
    if(q==NULL||h==NULL)
        printf("blad");
    else
    {
        for(i=0;i<N;i++)
        {
            fscanf(q,"%lf",&x);
            s+=x;
//            printf("%f\n",x);
            t[i]=x;
        }
        s=s/N;
        printf("\n%f\n",s);
        y=0;
        for(i=1;i<=N;i++)
        {
            fscanf(q,"%lf",&x);
            y+=pow((s-x),2);
        }
        dx=sqrt(y/(N-1));
        printf("\n%f\n",dx);
        for(i=0;i<N;i++)
        {
            x=t[i];
            if(x>=(s-dx) && x<=(s+dx))
                w1++;
            else
            {
                if(x>=(s-2*dx) && x<=(s+2*dx))
                    w2++;
                else
                    if(x>=(s-3*dx) && x<=(s+3*dx))
                        w3++;
            }
        }
        printf("\npierwszy przedz: %d\n",w1);
        printf("drugi przedz: %d\n",w2);
        printf("trzeci przedz: %d\n",w3);
        fprintf(h,"pierwszy przedz: %d\n",w1);
        fprintf(h,"drugi przedz: %d\n",w2);
        fprintf(h,"trzeci przedz: %d\n",w3);
        fclose(q);
        fclose(h);
    }
    return 0;
}
