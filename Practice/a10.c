#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of meetings: ");
    scanf("%d", &n);

    int arr[n][2];

    printf("Enter start and end time:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    // Sort according to start time
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j][0] > arr[j + 1][0])
            {
                int temp1 = arr[j][0];
                int temp2 = arr[j][1];

                arr[j][0] = arr[j + 1][0];
                arr[j][1] = arr[j + 1][1];

                arr[j + 1][0] = temp1;
                arr[j + 1][1] = temp2;
            }
        }
    }

    int possible = 1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i][0] < arr[i - 1][1])
        {
            possible = 0;
            break;
        }
    }

    if(possible)
        printf("true");
    else
        printf("false");

    return 0;
}