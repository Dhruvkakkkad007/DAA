#include <stdio.h>
int main()
{

    int n;

    printf("Enter Size:");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Elements:");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) //staring index
    { 
        for (int j = i; j < n; j++) //ending index
        {
            printf("[ ");

            for (int k = i; k <= j; k++) //prints subarray
            {
                printf("%d", a[k]);
            }
            printf("]\n");
        }
    }
    return 0;
}