#include <stdio.h>

int main()
{
    int linesOfStar;
    scanf("%d", &linesOfStar);

    int i, j, k, star = 1, space = linesOfStar - 1;

    for (i = 0; i < linesOfStar; i++)
    {
        for (k = 1; k <= space; k++)
        {
            /* code */
            printf(" ");
        }
        space--;

        for (j = 1; j <= star; j++)
        {
            /* code */
            printf("*");
        }

        if (i < linesOfStar - 1)
        {
            /* code */
            printf("\n");
        }

        star++;
    }

    return 0;
}