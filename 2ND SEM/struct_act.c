/* Define a structure of employee having data members name, address, age, and salary. 
Take data for n employee in an array dynamically and find the average salary.*/

#include <stdio.h>
#include <stdlib.h>

int n;

struct Names {
	char fname[80];
	char mname[80];
	char lname[80];
};

struct address {
	char city[80];
	char brgy[80];
	int zcode;
	char street[80];
	int houseno;
};

struct Employee {
	struct Names name;
	struct address add;
	int age;
	float salary;
};


int main(){
	
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar();

	struct Employee* employees = (struct Employee*)malloc(n * sizeof(struct Employee));
	system ("cls");
	
    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\t<<<Enter details for Employee %d>>>\n", i + 1);
        
        //for name
        printf("\n\t< NAME >\n");
        printf("First Name: ");
        gets(employees[i].name.fname);
        //scanf("%s", employees[i].name.fname);
        printf("Middle Name: ");
        gets(employees[i].name.mname);
        //scanf("%s", employees[i].name.mname);
        printf("Last Name: ");
        gets(employees[i].name.lname);
        //scanf("%s", employees[i].name.lname);
        system("cls");
        //for address
        printf("\t< ADDRESS >\n");
        printf("City: ");
        gets(employees[i].add.city);
        //scanf("%s", employees[i].add.city);
        printf("Barangay: ");
        gets(employees[i].add.brgy);
        //scanf("%s", employees[i].add.brgy);
        printf("ZIP Code: ");
        
        scanf("%d", &employees[i].add.zcode);
        
        printf("Street: ");
        gets(employees[i].add.street);
        //scanf("%s", employees[i].add.street);
        
        printf("House Number: ");
        scanf("%d", &employees[i].add.houseno);
        system("cls");
        //for age
        printf("\t< AGE >\n");
        printf("Age in numbers: ");
        scanf("%d", &employees[i].age);
        system("cls");
        //for salary
        printf("\t< SALARY >\n");
        printf("Input exact salary: ");
        scanf("%f", &employees[i].salary);
    }
	
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += employees[i].salary;
    }
	system("cls");
    float averageSalary = sum / n;
    printf("\nAverage Salary of employees: %.2f\n", averageSalary);

    // Free allocated memory
    free(employees);

	
	return 0;
}


