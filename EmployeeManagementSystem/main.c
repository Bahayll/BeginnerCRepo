#include <stdio.h>
#include <stdlib.h>

// Define a structure named Calisan to store employee information

struct Calisan {
    char isim[10];  // Employee name (up to 10 characters)
    int id;         // Employee ID
    int maas;       // Employee salary
};

// Function prototypes
void calisan_sirala(int *el1, int *el2); // Function to swap two integers
int Calisan_ara(struct Calisan d1[3], int aranan); // Function to search for a salary

// Main function
int main() {
    struct Calisan dizi[3]; // Array of Calisan structures to store 3 employees
    int i, j, ara, bul;     // Variables for loops, search, and results

    // Input employee information
    for (i = 0; i < 3; i++) {
        printf("Enter ID, salary, and name for employee %d:\n", i + 1);
        scanf("%d", &dizi[i].id);         // Read employee ID
        scanf("%d", &dizi[i].maas);       // Read employee salary
        scanf("%s", dizi[i].isim);        // Read employee name
    }

    // Sort employees by salary using bubble sort
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 2; i++) {
            if (dizi[i].maas > dizi[i + 1].maas) // Compare salaries
                calisan_sirala(&dizi[i].maas, &dizi[i + 1].maas); // Swap if necessary
        }
    }

    // Print sorted list of employees by salary
    printf("Employees sorted by salary:\n");
    for (i = 0; i < 3; i++) {
        printf("%d. employee earns %d salary.\n", i + 1, dizi[i].maas);
    }

    // Search for a specific salary
    printf("Enter the salary to search for:\n");
    scanf("%d", &ara);      // Read the salary to search
    bul = Calisan_ara(dizi, ara); // Call function to search for the salary
    printf("There are %d employees earning the searched salary.\n", bul); // Print search results

    return 0;
}

// Function to swap two integers (used for sorting salaries)
void calisan_sirala(int *el1, int *el2) {
    int temp = *el1;    // Store the value of el1 in temp
    *el1 = *el2;        // Assign the value of el2 to el1
    *el2 = temp;        // Assign the stored value of el1 (in temp) to el2
}

// Function to search for a specific salary among employees
int Calisan_ara(struct Calisan d1[3], int aranan) {
    int low = d1[0].maas;   // Initialize the lowest salary to the first employee's salary
    int high = d1[2].maas;  // Initialize the highest salary to the last employee's salary
    int mid = 0;            // Initialize the middle index
    int sayac = 0;          // Initialize a counter for the number of occurrences

    // Binary search loop
    while (low <= high) {
        mid = (low + high) / 2; // Calculate the middle index
        if (aranan == d1[mid].maas) {
            return mid;         // Return the index if the salary is found
        } else if (aranan < d1[mid].maas) {
            high = mid - 1;     // Adjust the search range if the salary is less than the middle element
        } else {
            low = mid + 1;      // Adjust the search range if the salary is greater than the middle element
        }
    }
    return sayac; // Return the count of occurrences (0 if not found)
}
