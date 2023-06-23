#include<stdio.h>

void main()
{
    // int a=50;
    // printf("\na = %d",a);
    // printf("\naddress of a = %d",&a);
    // int *p=&a;
    // printf("\np = %d",p);
    // printf("\n*p = %d",*p);
    // a=100;
    // printf("\n*p = %d",*p);
    // *p=*p+40;
    // printf("\na = %d",a);

    // int **q=&p;
    // printf("\nq = %d",q);
    // printf("\n*q = %d",*q);
    // printf("\n**q = %d",**q);

    // Array with pointer

    int arr[5]={10,20,30,40,50};
    printf("%d\n",arr);

    for(int i=0;i<5;i++)
    {
        printf("%d ",&arr[i]);
    }

    int *p=arr;
    printf("\n%d ",*p);
    printf("\n%d\n ",*(p+1));

    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }

/*

-> Take one array from user and print that array using pointer.

&*p =  p
*/


}