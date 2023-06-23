#include<stdio.h>

void main()
{
    int a=50;
    printf("\na = %d",a);
    printf("\naddress of a = %d",&a);
    int *p=&a;
    printf("\np = %d",p);
    printf("\n*p = %d",*p);
    a=100;
    printf("\n*p = %d",*p);
    *p=*p+40;
    printf("\na = %d",a);

    int **q=&p;
    printf("\nq = %d",q);
    printf("\n*q = %d",*q);
    printf("\n**q = %d",**q);



}