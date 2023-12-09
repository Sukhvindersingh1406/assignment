#include <stdio.h>
#include <limits.h> // For INT_MIN

int main()
{
    int arr[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = 0, secondLargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            secondLargest = arr[largest];
            largest = i;
        }
        else if (arr[i] > secondLargest && arr[i] != arr[largest])
        {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == INT_MIN)
        printf("Second largest doesn't exist\n");
    else
        printf("Second largest : %d", secondLargest);
    return 0;
}