#include <stdio.h>
 struct employee
    {
        char name[30];
        char hireDate[15];
        int salary;
    };
int main33()
{

    struct employee emp;
    printf("Enter Employee Name: ");
    scanf(" ");
    gets(emp.name);
    printf("Hiring Date: ");
    scanf("%s",emp.hireDate);
    printf("Employee Salary: ");
    scanf("%d",&emp.salary);

    printf("\n\n\n\nNAME: %s\nHiring Date: %s\nSalary: %d\n\n\n",emp.name,emp.hireDate,emp.salary);

    return 0;
}
