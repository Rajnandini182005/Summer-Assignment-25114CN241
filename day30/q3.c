#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", e[i].name);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Details:\n");
    for(i = 0; i < 3; i++) {
        printf("ID: %d\nName: %s\nSalary: %.2f\n\n",
               e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}