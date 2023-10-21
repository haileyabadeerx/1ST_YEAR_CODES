#include <stdio.h>
#include <string.h>

// Define the structure for employees
struct Employee {
    char name[50];
    char address[100];
    int age;
    float salary;
};

int main() {
    int n = 5; // Number of employees

    // Create an array of structures to hold employee data
    struct Employee employees[n];

    // Read data for each employee
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        printf("Address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        getchar(); // Consume the newline character
        printf("\n");
    }

    // Sort employees in alphabetical order based on their names
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                // Swap the positions of employees i and j
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    // Display information of each employee in alphabetical order
    printf("Employees in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s", employees[i].name);
        printf("Address: %s", employees[i].address);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    // Calculate the average salary
    float totalSalary = 0.0;
    for (int i = 0; i < n; i++) {
        totalSalary += employees[i].salary;
    }
    float averageSalary = totalSalary / n;

    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}

