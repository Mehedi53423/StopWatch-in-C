#include<stdio.h>
#include<windows.h>

#define TRUE 1

int main()
{
    int h = 0,m = 0,s = 0,ms = 0;

    system("color 50");
    printf("\n\n\n\n\n\n");
    printf("\t\t\t  ===========Stopwatch===========\n\n");
    printf("\t\t\t\tHour  Min  Sec  Ms\n");

    while(TRUE)
    {
        printf("\r \t\t\t\t%2d :  %2d : %2d : %2d",h,m,s,ms);

        ms++;

        Sleep(8);

        if(ms == 99)
        {
            s++;
            ms = 0;
        }

        if(s == 59)
        {
            m++;
            s = 0;
            ms = 0;
        }

        if(m == 59)
        {
            h++;
            m = 0;
            s = 0;
            ms = 0;
        }

        if(h == 24)
        {
            h = 0;
            m = 0;
            s = 0;
            ms = 0;
        }
    }

    return 0;
}
