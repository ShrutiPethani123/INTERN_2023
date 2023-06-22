/*

Array: collection of similar type of data

-> all elements have similar type
-> index start with 0
-> end with size-1


a-
2 4 5 7 8
0 1 2 3 4



a[0] = 2
a[1] =4
a[2] = 5
a[3] = 7
a[4] = 8



*/

#include <stdio.h>
#define SIZE 10

void main()
{
    printf("Array....");
    int a[5] = {45, 23, 67, 12, 89};
    int b[SIZE];

    printf("\na[%d] = %d", 0, a[0]);
    printf("\na[%d] = %d\n", 1, a[1]);

    for (int i = 0; i < 5; i++)
    {
        // a[i]=a[i]+2;
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
    // take array from user

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter element for array:\n ");

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}


/*

1. Intialize the array and print that array and Take one array from user and print that array.
2. Take one array from user and count total number of Negative elements and print all negative element also.
3. Take one array from user and print sum of all element.
4. Take one array from user and count total number of odd and even element.
5. Find maximum element from array.
6. Take one array from user and copy one array from another array.

    a - 4 5 7 8 6
    b - 4 5 7 8 6

7. Store all even element into even array and all odd element into odd array.

    a- 4 7 8 1 2 6 3 5 
    odd[]  - 7 1 3 5
    even[] - 4 8 2 6

8. Take one array from user and search element into array.

    a - 8 5 6 3 1

    ele: 5 -> present at location 2
    ele: 9 -> not found



9. Take two array from user and perform user given operation

    a - 4 5 7 8 6
    b - 2 3 6 

    -> size not same

    a - 2 4 5 8 6
    b - 2 3 5 6 4

    1. Add
    2. sub
    3. mul
    4. div
    5. exit

    1. c - 4 7 10 14 10


    



*/
