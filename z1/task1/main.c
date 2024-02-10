#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a > 0)
        a += 20;
    else
        a -= 5;
    printf("%d", a);
    return 0;
}