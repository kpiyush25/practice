#include<iostream>
int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++)
        printf("%dx%d=%d\n",n,i,n*i);
    return 0;
}