#include <stdio.h>
void main()
{
    int n;

    printf("Enter Size:");
    scanf("%d", &n);

    int a[n];

    printf("Enter Elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("[");

            for (int k = i; k <=j; k++)
            {
                printf("%d ", a[k]);
            }
            printf("]\n");
        }
    }
}