#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Employee structure definition
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Employee* next;
};

// Function to add an employee to the linked list
void addEmployee(struct Employee** head, char name[], int id, float salary) {
    struct Employee* new_employee = (struct Employee*)malloc(sizeof(struct Employee));
    strcpy(new_employee->name, name);
    new_employee->id = id;
    new_employee->salary = salary;
    new_employee->next = NULL;

    if (*head == NULL) {
        *head = new_employee;
    } else {
        struct Employee* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_employee;
    }
}

// Function to print the linked list (for testing purposes)
void printEmployees(struct Employee* head) {
    struct Employee* temp = head;
    while (temp != NULL) {
        printf("Name: %s, ID: %d, Salary: %.2f\n", temp->name, temp->id, temp->salary);
        temp = temp->next;
    }
}

// Function for sorting the linked list using Bubble Sort algorithm based on salary
void bubbleSort(struct Employee* head) {
    int swapped;
    struct Employee *ptr1;
    struct Employee *lptr = NULL;

    // If the list is empty or has only one element, no need to sort
    if (head == NULL || head->next == NULL) {
        return;
    }

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->salary > ptr1->next->salary) {
                // Swap salaries
                float temp = ptr1->salary;
                ptr1->salary = ptr1->next->salary;
                ptr1->next->salary = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

// Function to perform Binary Search on the linked list for a given salary
struct Employee* binarySearch(struct Employee* head, float target_salary) {
    struct Employee *low = head;
    struct Employee *high = NULL; // Set high appropriately based on your list setup
    struct Employee *mid = NULL;

    while (low != high) {
        mid = low + (high - low) / 2;
        if (mid->salary == target_salary) {
            return mid;
        } else if (mid->salary > target_salary) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return NULL; // Return NULL if the salary is not found
}

// Function to delete a specific employee from the linked list
int deleteEmployee(struct Employee** head, struct Employee* toDelete) {
    struct Employee* temp = *head;

    if (temp == toDelete) {
        *head = temp->next;
        free(toDelete);
        return 1; // Successfully deleted
    } else {
        while (temp->next != toDelete) {
            temp = temp->next;
        }
        temp->next = toDelete->next;
        free(toDelete);
        return 1; // Successfully deleted
    }

    return 0; // If employee to delete was not found
}

// Function to perform Linear Search on the linked list for a given salary
int linearSearch(struct Employee* head, float salary) {
    int count = 0;
    struct Employee* current = head;

    while (current != NULL) {
        if (current->salary == salary) {
            count++;
        }
        current = current->next;
    }

    return count;
}

int main() {
    struct Employee* employeeList = NULL;

    // Adding sample employees
    addEmployee(&employeeList, "Ahmet", 1, 2500.0);
    addEmployee(&employeeList, "Mehmet", 2, 3000.0);
    addEmployee(&employeeList, "Ayse", 3, 2500.0);
    addEmployee(&employeeList, "Fatma", 4, 3500.0);
    addEmployee(&employeeList, "Ali", 5, 2500.0);

    // Printing the initial linked list (for testing)
    printf("Initial Employee List:\n");
    printEmployees(employeeList);

    // Sorting the linked list based on salary
    bubbleSort(employeeList);
    printf("\nEmployee List Sorted by Salary:\n");
    printEmployees(employeeList);

    // Searching for a specific salary using Linear Search
    float searchSalary;
    printf("\nEnter the salary to search for: ");
    scanf("%f", &searchSalary);

    int result = linearSearch(employeeList, searchSalary);
    printf("\n%d employees have a salary of %.2f\n", result, searchSalary);

    return 0;
}
