#include <stdio.h>
#include <stdlib.h>

void multiplyByTwo(int *ptr);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    multiplyByTwo(&arr[2]); // Pass the address of the 3rd element of the array to the function
    printf("%d", arr[2]); // Print the value of the 3rd element after modification
    return 0;
}

void multiplyByTwo(int *ptr) {
    *ptr *= 2; // Multiply the value at the address pointed to by ptr by 2
}
