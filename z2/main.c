#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int a;
    scanf("%d", &a);

    if(num % 10 == 5 || num / 10 == 5)
        printf("есть 5\n");
    else
        printf("нет 5\n");
    if(num % 10 == a || num / 10 == a)
        printf("есть %d\n", a);
    else
        printf("нет %d\n", a);
        return 0;
}