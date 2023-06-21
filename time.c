/*
10. Take input from user in seconds and convert into hours , min and sec.

    sec = 190056

    52:47:36  -> (52*3600 + 47*60 + 36)

*/

#include<stdio.h>

void main()
{
    int sec;
    printf("Enter sec: ");
    scanf("%d",&sec);

    int hour = sec/3600;
    sec = sec - hour*3600;
    // sec = sec%3600;
    int min = sec/60;
    sec=sec%60;

    printf("%d: %d: %d",hour,min,sec);

}

/*

sec= 10000
hour = 2.


*/