#include<iostream>//reciprocal sum
int main()
{
    float i;
    float sum=0;
    for(i=1;i<=10000000;i++)
    {
       sum=sum+1.0/i;}

    printf("%lf",sum);
    return 0;
}