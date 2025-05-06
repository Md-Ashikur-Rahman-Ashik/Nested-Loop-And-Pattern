#include <stdio.h>

int main()
{
    int num = 1;
    for (int i = 1; i <= 3; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}