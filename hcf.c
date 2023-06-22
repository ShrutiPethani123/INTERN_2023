/*

15. Take two number from user and print HCF of two number.

    12 - 1 2 3 4 6 12
    6 - 1 2 3 6
    hcf-6

    5 - 1 5
    4 - 1 2 4
    hcf-1

*/

#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);

    int min = a>b ? b: a;
    int hcf;


    // if(a>b)
    // {
    //     min=b
    // }else{
    //     min = a
    // }

    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF: %d",hcf );
}