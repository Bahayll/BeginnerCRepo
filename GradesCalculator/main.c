#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
    int max, min, temp = 0, sum = 0, grades[SIZE], j, i, average;

    // Input grades for 10 students
    for (i = 0; i < SIZE; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i]; // Calculate sum of grades
    }

    average = sum / 10.0; // Calculate average grade

    printf("Average grade: %d\n", average);

    // Sort grades in ascending order using bubble sort
    for (j = 0; j < SIZE; j++) {
        for (i = 0; i < SIZE - 1; i++) {
            if (grades[i] > grades[i + 1]) {
                temp = grades[i];
                grades[i] = grades[i + 1];
                grades[i + 1] = temp;
            }
        }
    }

    max = grades[SIZE - 1]; // Maximum grade (last element after sorting)
    min = grades[0]; // Minimum grade (first element after sorting)

    printf("Max grade: %d\n", max);
    printf("Min grade: %d\n", min);

    return 0;
}
