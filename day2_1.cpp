#include<iostream>
int main(){
    int n,i;
    i=1;
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}  