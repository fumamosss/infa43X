#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int a = num % 102;
    printf("%d ", num);
    printf((num > 4 && num < 21) ? "копеек" : a == 1 ? "копейка" : a > 1 && a < 5 ? "копейки" : "копеек");
    return 0;
}