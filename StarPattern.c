#include <stdio.h>

int main()
{
    int num, j;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        /* code */
        for (j = 1; j <= i; j++)
        {
            /* code */
            printf("*");
        }
        // printf("\n");
        if (j <= num)
        {
            /* code */
            printf("\n");
        }
    }

    return 0;
}