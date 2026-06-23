#include <stdio.h>
#include <stdlib.h>
#define N 1000
int main()
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;

    fp1 = fopen("best2.txt", "w");
    // fp2 = fopen("worst2.txt", "w");
    // fp3 = fopen("avg2.txt", "w");

    for (int i = 1; i <= N; i++)
    {
        fprintf(fp1, "%d\n", i);
    }

    for (int i = N; i >= 1; i--)
    {
        fprintf(fp2, "%d\n", i);
    }

    for (int i = 1; i <= N; i++)
    {
        fprintf(fp3, "%d\n", rand() % (i + 1));
    }

    fclose(fp1);
    // fclose(fp2);
    // fclose(fp3);

    int a1[N];
    int temp, key, j;

    fp1 = fopen("worst1.txt", "r");

    for (int i = 0; i < N; i++)
    {
        fscanf(fp1, "%d", &a1[i]);
    }

    for (int i = 0; i < N; i++)
    {
        key = a1[i];
        j = i - 1;

        while (j >= 0 && a1[j] == key)
        {
            a1[j + 1] = a1[j];
        }
        a1[j + 1] = key;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", a1[i]);
    }
}
