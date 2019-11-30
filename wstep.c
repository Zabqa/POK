#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
    srand(time(NULL));
    double z1,z2,x,y,a=0,b=1;
    y=a+(rand()+1.0)/(RAND_MAX+1.0)*(b-a);
    x=a+(rand()+1.0)/(RAND_MAX+1.0)*(b-a);
    z1=cos(2*M_PI*y)*sqrt(-2*log(x));
    z2=sin(2*M_PI*y)*sqrt(-2*log(x));
    printf("%f\n%f",z1,z2);
    return 0;
}
