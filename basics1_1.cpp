#include<stdio.h>//demonetisation
int main()

{
    int n;
    //This is a comment
    scanf("%d",&n);
    printf("You have %d notes of 2000",(n/2000));
    printf("\n %d notes of 500\n %d notes of 200\n %d notes of 100\n %d notes of 50\n %d notes of 20\n %d notes of 10\n %d coins of 5\n %d coins of 2 and %d coins of 1.",((n%2000)/500),(((n%2000)%500)/200),((((n%2000)%500)%200/100),(((((n%2000)%500)%200)%100)/50),((((((n%2000)%500)%200)%100)%50)/20),(((((((n%2000)%500)%200)%100)%50)%20)/10),((((((((n%2000)%500)%200)%100)%50)%20)%10)/5),(((((((((n%2000)%500)%200)%100)%50)%20)%10)%5)/2),(((((((((n%2000)%500)%200)%100)%50)%20)%10)%5)%2)));
    return 0;
}