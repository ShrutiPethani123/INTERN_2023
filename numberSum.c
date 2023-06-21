#include<stdio.h>

void main()
{
    int n=2473;
    int rem,sum=0;

    // while(n!=0) //2473 //247 24  2 0
    // {
    //     rem = n%10; // 3  7  4 2
    //     sum=sum+rem; // 3 10  14  16
    //     n=n/10; //247  24  2 0
    // } 

    // printf("Sum is %d",sum);

    printf("\nLast digit %d",n%10);

    while(n!=0)
    {
        rem= n%10;
        n=n/10;
    }

    printf("\nFirst Digit: %d",rem);




}