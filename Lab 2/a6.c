//using Two Loops

// #include <stdio.h>
// void main()
// {
//     int n, flag = 0;

//     printf("Enter n:");
//     scanf("%d", &n);

//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + i;

//         for (int j = i; j < n; j++)
//         {

//             if (sum == n)
//             {
//                 flag = 1;
//                 break;
//             }

//             if (sum > n)
//             {
//                 break;
//             }
//         }
//         if (flag)
//         {
//             break;
//         }
//     }

//     if (flag)
//     {
//         printf("True");
//     }
//     else
//     {
//         printf("False");
//     }
// }




//using One Loop
#include <stdio.h>

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int l = 1, r = 1;
    int sum = 1;
    int found = 0;

    while( l <= n / 2)
    {
        if (sum < n)
        {
            r++;
            sum += r;
        }
        else if (sum > n)
        {
            sum -= l;
            l++;
        }
        else
        {
            found = 1;
            printf("True\n");

            for (int i = l; i <= r; i++)
            {
                printf("%d", i);

                if (i < r)
                    printf(" + ");
            }

            printf(" = %d", n);
            break;
        }
    }

    if (!found)
        printf("False");
}