#include <stdio.h>
#include <stdlib.h>

void sort12(int *aptr);
void swap(int *el1, int *el2);

int main() {
    int a[9] = {2, 6, 4, 8, 12, 89, 69, 45, 37};
    int i;

    sort12(a);

    printf("Sorted Array: ");
    for (i = 0; i < 9; i++) {
        printf("%d, ", a[i]);
    }
    printf("\n");

    return 0;
}

void sort12(int *aptr) {
    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 8; j++) {
            if (aptr[j] > aptr[j + 1]) {
                swap(&aptr[j], &aptr[j + 1]);
            }
        }
    }
}

void swap(int *el1, int *el2) {
    int temp;

    temp = *el1;
    *el1 = *el2;
    *el2 = temp;
}
