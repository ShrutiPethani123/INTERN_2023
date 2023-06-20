/*
Datatypes 
Operators

Arithmetic  --> + - * / %
Relational --> > < >= <= == !=
Assignment  --> = += -= *= /= %= &= |=  
Logical Operator --> && || !
bitwise --> & | ^ ~ << >>
inc/ dec operator --> ++ --
ternary operator --> ? :

T-1
F-0

&&

A   B   A&&B
F   F   F
F   T   F
T   F   F
T   T   T


||


A   B   A||B
F   F   F
F   T   T
T   F   T
T   T   T

^

A   B   A||B
F   F   F
F   T   T
T   F   T
T   T   F

// binary to decimal 

512 256   128    64    32     16     8    4    2    1                    

1010 = 10
1110 = 14
1111 = 15
1101 = 13

 1*2^3 + 1*2^2  +  0*2^1 + 1*2^0   = 8 + 4 + 0 + 1 = 13

1010101 = 0101 0101 = 64+16+4+1= 85
10111 = 23 

// decimal to binary

12 - 000001100
17 - 10001
124 - 0111 1100
15 - 1111
78 - 0100 1100



Conditional Statment
    - if else
    - switch
    - loops


*/

#include<stdio.h>

void main()
{
    int a=4;
    int b=78;
    printf("%d",a>b);

    // printf("\na++: %d",a++); // 4
    // printf("\na: %d",a); // 5
    // printf("\n++a: %d",++a); //6
    // printf("\na: %d",a);//6

    int c = a++ + a++ + ++a ; // 4(a=5) + 5(a=6)+ 7(7)
    printf("\nc: %d",c);
}