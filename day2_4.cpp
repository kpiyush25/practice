#include<iostream>//check if a number is a prime(int n)(n>1)
int main()
{
   int n,i;
   int flag=1;
   scanf("%d",&n);
   for (i=2;i<n;i++)
   {
       if(n%i==0)
       {
          flag=0;
       }
   }
   if(flag)
   {
        printf("prime");
   }
   else {
       printf("composite");
   }
 return 0;
}