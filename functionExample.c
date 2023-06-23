#include <stdio.h>

void printNum()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
}

void printNum2(int a , int b)
{
    for(int i=a;i<=b;i++)
    {
        printf("%d ",i);
    }
}

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }

    return f;
}

void main()
{
    printNum();
    printf("\nEnter two number: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printNum2(a,b);

    int ans=fact(a);
    printf("Factorial of %d is %d",a,ans);


}


/*

-> Take one number from user and find factorial of that number.(with r.t with argument)

*/