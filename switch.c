#include<stdio.h>

void main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Monday!!");
            break;
        case 2:
            printf("Tuesday!!");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday!!");
            break;
        case 5:
            printf("Friday!!");
            break;
        case 6:
            printf("Satuarday!!");
            break;
        case 7:
            printf("Sunday!!");
            break;
        default:
            printf("Invalid Input!!");
        
    }
}

/*

1. print week days according to number.
2. Print days of month using switch case
    1 -> 31 days
    2-> 28/29 days
    3 -> 31 days
    4 -> 30 days
3. Make Hotel Menu.
*/