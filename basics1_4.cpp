#include<iostream>//even reverse
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int p[3],q[3];
    p[0]=(a/100),p[1]=((a%100)/10),p[2]=((a%100)%10);
    q[0]=(b/100),q[1]=((b%100)/10),q[2]=((b%100)%10);
    int x,y;
    if(p[2]==0)
    {
        if(p[1]==0)
        {
            x=p[0];
        }
        {
            x=(10*p[1])+p[0];
        }
    }
    else
    {
       x=100*p[2]+10*p[1]+p[0];
    }
     if(q[2]==0)
    {
        if(q[1]==0)
        {
            y=q[0];
        }
        {
            y=(10*q[1])+q[0];
        }
    }
    else
    {
       y=100*q[2]+10*q[1]+q[0];
    }
    if((x%2==0)||(y%2==0))
    {
        if((x%2==0)&&(y%2==0))
        {
            printf("%d",x+y);
        }
        else
        {
              printf("%d",a+b);
        }    
    }else
    {
        printf("%d",a*b);
    }
    return 0;
} 