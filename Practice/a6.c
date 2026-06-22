#include <stdio.h>
int main()
{
    FILE *fp;
    int n, i, j, temp;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("Error Opening File");
        return 1;
    }

    fscanf(fp, "%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]);
    }

    fclose(fp);

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

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}