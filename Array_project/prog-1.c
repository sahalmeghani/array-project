#include <stdio.h>
int main()
{
    int n;
    printf("Enter the array's size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array's elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Negative elements in the array are:\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("a[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}
