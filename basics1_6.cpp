#include<iostream>//GCD of two numbers
int GCD(int x, int y)
{
    if(x>y)
    {
        return GCD(x-y,y);
    }
    else if(x<y)
    {
        return GCD(y-x,x);
    }
    else
    {
        return x;
    }
   
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",GCD(x,y));
    return 0;
}