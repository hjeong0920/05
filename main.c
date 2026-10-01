#include <stdio.h>

int main(void)
{
    int num;

    printf("input an integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    printf("Absoulte value : %d\n", num);

    return 0;
}