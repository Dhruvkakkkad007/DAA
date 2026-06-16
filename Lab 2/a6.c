#include <stdio.h>
void main()
{
    int n, flag = 0;

    printf("Enter n:");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + i;

        for (int j = i; j < n; j++)
        {

            if (sum == n)
            {
                flag = 1;
                break;
            }

            if (sum > n)
            {
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }

    if (flag)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

#include <stdio.h>
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int l = 0;
    int r = 0;
    int sum = 0;
    for (int i = 0; i < n / 2; i++)
    {

        if (sum < n)
        {
            sum = sum + i;
        }

        if (sum > n)
        {
            sum = sum - l;
        }
    }
}