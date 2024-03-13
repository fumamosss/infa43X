#include <stdio.h>

int main ()
{
    int num, sum, multi;
    scanf("%d", &num);
    if(num > 99 && num < 1000)
    {
        int dig1, dig2, dig3;

        dig1 = num / 100;
        dig2 = (num / 10) % 10;
        dig3 = num % 10;

        sum = dig1 + dig2 + dig3;
        multi = dig1 * dig2 * dig3;

        if(sum > 9 && sum < 100)
            printf("da\n");
        else
            printf("net\n");

        if(multi > 99 && multi < 1000)
            printf("da\n");
        else
            printf("net\n");
    }
    else
        printf("wrong num\n");
}