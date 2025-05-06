#include <stdio.h>

int main()
{
    int array_size, i, j, k, l;
    scanf("%d", &array_size);
    int integerArray[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &integerArray[i]);
    }

    for (j = 0; j < array_size; j++)
    {
        /* code */
        for (k = j + 1; k < array_size; k++)
        {
            /* code */
            int tmp;

            if (integerArray[j] > integerArray[k])
            {
                /* code */
                tmp = integerArray[j];
                integerArray[j] = integerArray[k];
                integerArray[k] = tmp;
            }
        }
    }

    for (l = 0; l < array_size; l++)
    {
        /* code */
        printf("%d ", integerArray[l]);
    }

    return 0;
}