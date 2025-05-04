#include <stdio.h>

int main()
{
    int linesOfStar;
    scanf("%d", &linesOfStar);

    int i, j, k, space = linesOfStar - 1;

    for (i = 1; i <= linesOfStar; i++)
    {
        for (k = 1; k <= space; k++)
        {
            /* code */
            printf(" ");
        }
        space--;

        for (j = 1; j <= i; j++)
        {
            /* code */
            printf("%d", j);
        }
        if (i < linesOfStar)
        {
            /* code */
            printf("\n");
        }
    }

    return 0;
}