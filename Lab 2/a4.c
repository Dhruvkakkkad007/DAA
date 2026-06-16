#include <stdio.h>
void main()
{
    int n;

    int pos[100], neg[100];

    int p = 0,l = 0;


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
        if (a[i] > 0)
        {
            pos[p++] = a[i];
        }
        else
        {
            neg[l++] = a[i];
        }
    }

    int i = 0, j = 0;

    while(i < p && j < l){
        printf("%d ",pos[i++]);
        printf("%d ",neg[j++]);
    }

    while (i < p)
    {
        printf("%d",pos[i++]);
    }

    while (j < l)
    {
        printf("%d",neg[j++]);
    }   
}
