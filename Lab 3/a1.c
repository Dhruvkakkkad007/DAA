#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;

    fp1 = fopen("best3.txt", "w");
    fp2 = fopen("worst3.txt", "w");
    fp3 = fopen("avg3.txt", "w");

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
    fclose(fp2);
    fclose(fp3);


    

    // opening and Scaning From a File
    int a1[N], a2[N], a3[N];
    int temp;

    // worst-case
    fp1 = fopen("worst1.txt", "r");

    for (int i = 0; i < N; i++)
    {
        fscanf(fp1, "%d", &a1[i]);
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a1[j] > a1[j + 1])
            {
                temp = a1[j];
                a1[j] = a1[j + 1];
                a1[j + 1] = temp;
            }
        }
    }

    // best-case
    fp2 = fopen("best1.txt", "r");
    for (int i = 0; i < N; i++)
    {
        fscanf(fp1, "%d", &a2[i]);
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a2[j] > a2[j + 1])
            {
                temp = a2[j];
                a2[j] = a2[j + 1];
                a2[j + 1] = temp;
            }
        }
    }

    // best-case
    fp2 = fopen("best1.txt", "r");
    for (int i = 0; i < N; i++)
    {
        fscanf(fp2, "%d", &a2[i]);
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a2[j] > a2[j + 1])
            {
                temp = a2[j];
                a2[j] = a2[j + 1];
                a2[j + 1] = temp;
            }
        }
    }

    //avg-case
    fp3 = fopen("avg1.txt", "r");
    for (int i = 0; i < N; i++)
    {
        fscanf(fp3, "%d", &a3[i]);
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a3[j] > a3[j + 1])
            {
                temp = a3[j];
                a3[j] = a3[j + 1];
                a3[j + 1] = temp;
            }
        }
    }

    printf("Worst-case Array\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", a1[i]);
    }

    printf("best-case Array\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", a2[i]);
    }

    printf("Avg-case Array\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", a3[i]);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}