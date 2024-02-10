#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    if((a + b) % 5 == 0)
        c = a + b + 1;
    else
        c = a + b -2;
    printf("%d",c);
    return 0;
}