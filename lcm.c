/*
16. Take two number from user and print LCM of two number.

    12 - 12 24 36 48 60
    6 - 6 12 18 24 30
    lcm:12

    5 - 5 10 15 20 25 30
    4 - 4 8 12 16 20
    lcm:20

*/

#include<stdio.h>

void main()
{
    int a,b;
    int count=0;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);

    int max = a>b ? a: b;
    int lcm;
    int i=max;

    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
        i+=max;
        count++;
    }

    printf("LCM is: %d ",lcm);
    printf("\n count: %d",count);
}

