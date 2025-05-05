#include <stdio.h>

int main()
{
    int array_size, i, j, yesCount = 0, sumNumber;
    scanf("%d", &array_size);
    int arr[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    scanf("%d", &sumNumber);

    for (i = 0; i < array_size; i++)
    {
        /* code */
        for (j = i + 1; j < array_size; j++)
        {
            /* code */
            if (arr[i] + arr[j] == sumNumber)
            {
                /* code */
                yesCount++;
            }
        }
    }

    if (yesCount > 0)
    {
        /* code */
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}