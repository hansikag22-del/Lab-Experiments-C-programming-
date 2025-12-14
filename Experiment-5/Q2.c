#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int positive = 0, negative = 0, odd = 0, even = 0;
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check array bounds
    if (n > 100 || n < 1) 
    {
        printf("Invalid number of elements. Must be between 1 and 100.\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, odd, and even numbers
    for (i = 0; i < n; i++)
    {
      if (arr[i] >= 0)
      positive++;
      else
      negative++;
      if (arr[i] % 2 == 0)
      even++;
      else
      odd++;
    }
    
    // Display the counts
    printf("\nPositive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;

}





