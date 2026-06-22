#include <stdio.h>

void main()
{
    FILE *fp;
    int n, key, j, i;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("Error");
        return 1;
    }

    fscanf(fp, "%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]);
    }

    fclose(fp);

    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    
    }

    printf("Sorted Array: "); 
    
    for (i = 0; i < n; i++) 
    { 
        printf("%d ", a[i]); 
    }
}