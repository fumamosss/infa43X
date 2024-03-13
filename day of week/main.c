#include <stdio.h>

int main ()
{
    int num, day;
    scanf("%d", &num);
    day = num % 7;
    switch (day)
    {
    case 1:
        printf("Понедельник");
        break;
    case 2:
        printf("Вторник");
        break;
    case 3:
        printf("Среда");
        break;
    case 4:
        printf("Четверг");
        break;
    case 5:
        printf("Пятница");
        break;
    case 6:
        printf("Суббота");
        break;
    case 0:
        printf("Воскресенье");
        break;
    
    default:
        printf("Try another num");
        break;
    }
}