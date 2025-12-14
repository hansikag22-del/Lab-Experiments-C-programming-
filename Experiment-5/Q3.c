#include <stdio.h>
int main()
{
    int arr[100], n, i, num, count = 0;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read the number whose frequency is to be found
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    // Count the frequency
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    // Display the result
    printf("Frequency of %d = %d\n", num, count);
    return 0;

}




