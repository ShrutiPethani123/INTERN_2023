/*
Types:

1. user define
2. built in 


--> User Define Function 

    1. with r.t with arg
    2. with r.t without arg
    3. without r.t with arg
    4. without r.t without arg


-> 

function:
1. declaration
2. Defination
3. Calling



returnType function_name(arguments){
    // body of function
}


returnType: void,int , float , char.....



-> defination
int add(int c,int d)
{
    return c+d
}

-> calling
int ans = add(2,4);

*/


#include<stdio.h>
void print(); // declaration

void main()
{
    // print(); // calling
    // print();
    // print();
    // print();

    for(int i=0;i<5;i++)
    {
        print();
    }

    int ans = add(4,5);
    printf("\nAddition is : %d",ans);
    printf("\nAddition is: %d",add(6,7));

    
}

void print() // defination
{
    printf("\nHello.......");
}


int add(int c, int d)
{
    return c+d;
}


/*

print 1 to 10 numnber using function.

*/