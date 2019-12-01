#include<iostream>//Colatz conjecture
void col(int n)
{   
    if(n == 1){
        return;
    }
    if(n%2==1)
    {   
        printf("%d\n",3*n+1);
        return col(3*n+1);
    }
    else
    {
        printf("%d\n",n/2);
        return col(n/2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
   col(n);
    return 0;
}