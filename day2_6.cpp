#include<iostream>
int main()
{
    int j,i,n;
    scanf("%d\n",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {           
           scanf("%d",&a[i][j]);
       }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("%d ",(a[i][j])*(a[i][j]));
        }
        printf("\n");
       
    }
    int k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                k=k+a[i][j];
            }    
        }
    }   
    printf("the trace is %d",k);
    return 0;
}
