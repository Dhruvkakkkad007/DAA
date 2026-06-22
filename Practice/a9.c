#include <stdio.h>

int main()
{
    int n, temp, j, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int mindiff = a[1] - a[0];

    for (int i = 1; i < n - 1; i++)
    {
        int diff = a[i + 1] - a[i];

        if (diff < mindiff)
        {
            mindiff = diff;
        }
    }

    printf("Minimum Difference = %d", mindiff);
}