#include <stdio.h>

int main()
{
    int array_size, i, j, k, sumNumber;
    scanf("%d", &array_size);
    int arr[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    scanf("%d", &sumNumber);

    for (j = 0; j < array_size; j++)
    {
        /* code */
        
        if (arr[j] + arr[k] == sumNumber)
        {
            /* code */
            printf("Yes");
            break;
        }
        else
        {
            printf("No");
        }
    }

    return 0;
}