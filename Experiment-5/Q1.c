#include <stdio.h>
int main()
{
int n, i;
int arr[100];
int largest, second;
// Read number of elements
printf("Enter the number of elements: ");
scanf("%d", &n);
// Read elements into array
printf("Enter %d integers:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Initialize largest and second largest
if (arr[0] > arr[1]) {
largest = arr[0];
second = arr[1];
} else {
largest = arr[1];
second = arr[0];
}
// Loop to find second largest
for (i = 2; i < n; i++) {
if (arr[i] > largest) {
second = largest;
largest = arr[i];
} else if (arr[i] > second && arr[i] != largest) {
second = arr[i];
}
}
printf("Second largest number is: %d\n", second);
return 0;
}
