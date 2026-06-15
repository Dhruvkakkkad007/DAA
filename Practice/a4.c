#include <stdio.h>
int main()
{
    int p = 0, q = 0;
    int pos[100], neg[100];
    int n;
    printf("Enter a Size:");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            pos[p++] = a[i];
        }
        else
        {
            neg[q++] = a[i];
        }
    }

    int i = 0, j = 0;
    while (i < p && j < q)
    {
        printf("%d ", pos[i++]);
        printf("%d ", neg[j++]);
    }

    while (i < p)
    {
        printf("%d ", pos[i++]);
    }

    while (j < q)
    {
        printf("%d ", neg[j++]);
    }
    return 0;
}