#include <stdio.h>

// Function to maintain Max Heap
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

// Heap Sort Function
void heapSort(int arr[], int n)
{
    // Build Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // Heap Sort
    for (int i = n - 1; i > 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

int main()
{
    int n, k;

    printf("Enter Size of Arrays: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter Elements of Array A:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter Elements of Array B:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("Enter Value of k: ");
    scanf("%d", &k);

    // Array to store all possible sums
    int sum[n * n];
    int index = 0;

    // Generate all possible sums
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[index] = a[i] + b[j];
            index++;
        }
    }

    // Sort all sums using Heap Sort
    heapSort(sum, index);

    // Print Top K Maximum Sums
    printf("\nTop %d Maximum Sums are:\n", k);

    for (int i = index - 1; i >= index - k; i--)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}