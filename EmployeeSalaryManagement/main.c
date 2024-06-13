#include <stdio.h>
#include <stdlib.h>

struct link_list {
    int data;
    struct link_list *next;
};

struct Employee {
    char name[10];
    int id;
    int salary;
    struct link_list *next;
};

void sortEmployeesBySalary(struct Employee employees[3]);
int searchEmployeeBySalary(struct Employee employees[3], int salary);

int main() {
    struct Employee employees[3];
    int i, searchValue, foundValue;

    // Input employee information
    for (i = 0; i < 3; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Enter ID of employee %d: ", i + 1);
        scanf("%d", &employees[i].id);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%d", &employees[i].salary);
    }

    // Print employee information
    printf("\nEmployee Information:\n");
    for (i = 0; i < 3; i++) {
        printf("%s %d %d\n", employees[i].name, employees[i].id, employees[i].salary);
    }

    // Sort employees by salary
    sortEmployeesBySalary(employees);

    // Print sorted salaries
    printf("\nSorted salaries:\n");
    for (i = 0; i < 3; i++) {
        printf("%d\n", employees[i].salary);
    }

    // Search for an employee by salary
    printf("\nEnter the salary to search for: ");
    scanf("%d", &searchValue);

    foundValue = searchEmployeeBySalary(employees, searchValue);
    if (foundValue != -1) {
        printf("Employee with the searched salary found: %d\n", foundValue);
    } else {
        printf("Employee with the searched salary not found.\n");
    }

    return 0;
}

void sortEmployeesBySalary(struct Employee employees[3]) {
    int i, j, temp;
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 2; i++) {
            if (employees[i].salary > employees[i + 1].salary) {
                temp = employees[i].salary;
                employees[i].salary = employees[i + 1].salary;
                employees[i + 1].salary = temp;
            }
        }
    }
}

int searchEmployeeBySalary(struct Employee employees[3], int salary) {
    int low = 0, high = 2, mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (salary == employees[mid].salary) {
            return employees[mid].salary;
        } else if (salary < employees[mid].salary) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return -1; // Employee with the searched salary not found
}
