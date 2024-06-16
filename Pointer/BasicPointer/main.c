#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    int a=5, *aptr;  // Declared a variable 'a' of type integer and initialized it to 5, also declared a pointer 'aptr'.
    aptr = &a;        // Assigned the address of 'a' to 'aptr'.
    printf("Address of a variable = %p", &a);  // Printing the address of 'a' using the address operator (%p for address).
    printf("\nAddress of aptr = %p", &aptr);    // Printing the address of 'aptr' using the address operator (%p for address).
    printf("\nValue inside aptr = %p", aptr);    // Accessing the value inside 'aptr' (which is the address of 'a') and printing it (%p for address).
    printf("\nValue pointed by aptr = %d", *aptr);  // Accessing the value pointed by 'aptr' (which is the value of 'a') and printing it (%d for integer).
}

int main() {
    int a = 5, *aptr;
    aptr = &a;
    printf("Address of a variable = %p, value = %d", &a, a);
    printf("\nAddress of aptr = %p, points to address = %p, points to value = %d", &aptr, aptr, *aptr);
    function(aptr);  // Since we are not returning any value from the function, it should be of type 'void', and since we are passing a pointer as an argument, the function parameter should also be a pointer.
    return 0;
}

void function(int *ptr) {
    printf("\nInside function \n");
    printf("\nAddress of ptr = %p, points to address = %p, points to value = %d", &ptr, ptr, *ptr);
    *ptr = *ptr + 5;  // Performing an operation on the value pointed by 'ptr', which will reflect globally because we are modifying the value at the address of 'a'.
    printf("\nAddress of ptr = %p, points to address = %p, points to value = %d", &ptr, ptr, *ptr);
}

Output:

Address of a variable = 000000000061FE1C, value = 5
Address of aptr = 000000000061FE10, points to address = 000000000061FE1C, points to value = 5
Inside function
Address of ptr = 000000000061FDF0, points to address = 000000000061FE1C, points to value = 5
Address of ptr = 000000000061FDF0, points to address = 000000000061FE1C, points to value = 10


// Finding which of the two numbers is larger using pointers

void main() {
    int a = 15;
    int b = 92;
    int *p;
    printf("\na=%d, b=%d", a, b);
    printf("\n&a=%p, &b=%p, &p=%p", &a, &b, &p);
    p = larger(&a, &b);  // Passed the addresses of variables 'a' and 'b' to the function, hence the function should accept pointers to integers.
    printf("\n&p=%p, *p=%d\n", p, *p);
    printf("\n%d is larger\n", *p);
}

int larger(int *x, int *y) {
    printf("\n&x=%p, &y=%p\n", &x, &y);
    printf("\nx=%p, y=%p\n", x, y);
    printf("\n*x=%d, *y=%d\n", *x, *y);
    if (*x > *y)
        return x;
    else
        return y;
}

Output:

a=15, b=92
&a=000000000061FE1C, &b=000000000061FE18, &p=000000000061FE10
&x=000000000061FDF0, &y=000000000061FDF8
x=000000000061FE1C, y=000000000061FE18
*x=15, *y=92
&p=000000000061FE18, *p=92
92 is larger


// Arrays - Pointers can be used in place of each other since they both operate on addresses.

int main() {
    int a, *aptr, b[5], *bptr;
    aptr = &a;   // Assigned the address of variable 'a' to 'aptr' using the address operator.
    bptr = b;    // Assigned the address of array 'b' to 'bptr', no need for the address operator because both operate on addresses.
    printf("\n&a=%p, aptr=%p\n", &a, aptr);
    printf("\n&b=%p, bptr=%p\n", &b, bptr);
}

Output:

&a=000000000061FE0C, aptr=000000000061FE0C

&b=000000000061FDF0, bptr=000000000061FDF0


int main() {
    int a = 3, *aptr, *bptr;
    int b[3] = {10, 20, 30};
    int i;
    aptr = &a;   // Assigned the address of variable 'a' to 'aptr' using the address operator.
    bptr = b;    // Assigned the address of array 'b' to 'bptr', no need for the address operator because both operate on addresses.
    printf("\n&a=%p, aptr=%p\n", &a, aptr);
    printf("\n&b=%p, bptr=%p\n", &b, bptr);
    printf("\nb[0]=%d, *bptr=%d\n", b[0], *bptr);

    bptr = &b[1];  // Making 'bptr' point to the second element of array 'b', hence used the address operator.
    printf("\n&b[1]=%p, b[1]=%d\n", &b[1], b[1]);
    printf("\nbptr=%p, *bptr=%d\n", bptr, *bptr);

    bptr++;
    printf("\nbptr=%p, *bptr=%d\n", bptr, *bptr);
}

Output:

&a=000000000061FE0C, aptr=000000000061FE0C

&b=000000000061FE00, bptr=000000000061FE00

b[0]=10, *bptr=10

&b[1]=000000000061FE04, b[1]=20

bptr=000000000061FE04, *bptr=20

bptr=000000000061FE08, *bptr=30


// ARRAY NOTATION [], OFFSET NOTATION * PERFORMING OPERATIONS

int main() {
    int d[3] = {10, 20, 30}, *dptr, i;
    dptr = d;  // 'dptr' now holds the address of array 'd'.
    for (i = 0; i < 3; i++)
        printf("%d, ", *(dptr + i));  // Accessing elements of array 'd' using pointer arithmetic (10, 20, 30).

    dptr = d;  // Re-assigning 'dptr' to hold the address of array 'd' again as we are going outside of the scope each time and have to enter the array again each time.
    for (i = 0; i < 3; i++)
        printf("%d, ", dptr[i]);  // Accessing elements of array 'd' using array notation (10, 20, 30).

    dptr = d;
    for (i = 0; i < 3; i++)
        printf("%d, ", *(d + i));  // Accessing elements of array 'd' using pointer arithmetic (10, 20, 30).

    dptr = d;
    for (i = 0; i < 3; i++) {
        printf("%d, ", *(dptr));  // Accessing elements of array 'd' using pointer notation (10, 20, 30).
        dptr++;  // Be careful and note that if you do not put it here and not exceed the scope, the for loop will produce 10 10 10.
    }
}

int main() {
    int d[3] = {10, 20, 30}, *dptr, i;
    dptr = d;
    for (i = 0; i < 3; i++)
        printf("%d, ", *dptr + i);  // Produces 10 11 12.
}

*/

// SORTING ARRAYS USING POINTERS

// Function to sort an array in ascending order
void sortArray(int *arr, int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Main function
int main() {
    int a[9] = {2, 6, 4, 8, 12, 89, 68, 45, 37};
    int i;

    // Sorting the array 'a' in ascending order
    sortArray(a, 9);

    // Printing the sorted array
    printf("Sorted Array: ");
    for (i = 0; i < 9; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
