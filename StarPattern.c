#include <stdio.h>

int main()
{
    int num, j;
    scanf("%d", &num);

    for (int i = num; i >= 1; i--)
    {
        /* code */
        for (j = 1; j <= i; j++)
        {
            /* code */
            printf("*");
        }

        if (j > 2)
        {
            /* code */
            printf("\n");
        }
    }

    return 0;
}