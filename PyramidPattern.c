#include <stdio.h>

int main()
{
    int numberOfLines, star = 1, k, i;
    scanf("%d", &numberOfLines);

    int space = numberOfLines - 1;

    for ( i = 0; i < numberOfLines; i++) // This loop is for printing lines
    {
        for (int j = 1; j <= space; j++)
        {
            /* code */
            printf(" ");
        }
        space--;

        for (k = 1; k <= star; k++) // This loop is for printing stars
        {
            /* code */
            printf("*");
        }
        if (i < numberOfLines - 1)
        {
            /* code */
            printf("\n");
        }

        star = star + 2;
    }

    return 0;
}