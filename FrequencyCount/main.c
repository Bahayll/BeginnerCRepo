#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], frequency[100];
    int n, i, j, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements and initialize frequency array
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
        frequency[i] = -1; // Initialize frequency array
    }

    // Calculate frequency of each element
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
                frequency[j] = 0; // Mark the element as visited
            }
        }
        if (frequency[i] != 0)
            frequency[i] = count;
    }

    // Print the original array
    printf("Original Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Print the frequency of each element
    printf("Frequency Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", frequency[i]);
    }
    printf("\n");

    return 0;
}
