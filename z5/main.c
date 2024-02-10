#include <stdio.h>

int main()
{
    int num, a1, a2, a3, a4;
    scanf("%d", &num);
    a1 = num / 1000; // _***
    a2 = num / 100 % 10; // *_**
    a3 = num / 10 % 10; // **_*
    a4 = num % 10; // ***_
    if(a1 == a4 && a2 == a3)
        printf("палиндром");
    else
        printf("не палиндром");
    return 0;
}