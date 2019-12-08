#include<iostream>//calculator
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("summation of the two numbers is\n %d\ndifference of the two numbers is\n%d\n the product of two numbers is \n%d\n",a+b,a-b,a*b);
    if(b!=0)
    {
        printf("\ndivision of two numbers will give \n%0.3f",(float)a/b );
    }
    else
    {
        printf("invalid calculation");
    }
    
    return 0;
}
