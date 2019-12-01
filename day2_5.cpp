#include<iostream>
int isprime(int n)
{
    int i,a=-1;//a can be assigned any positive value
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a=0;
            break;
        }
    }
    return a;
}
int main()/* code */
{
    int n;
    scanf("%d",&n);
    if(isprime(n))
    {
        printf("it is a prime!");
    }
    else
    {
        printf("it is a composite");
    }
    return 0;
}