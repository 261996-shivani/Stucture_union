#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    char *name;
    float salary;
};
int main()
{
    int no;
    printf("Enter the count of Employee: ");
    scanf("%d", &no);

    struct Employee emp[no];

    for (int i = 0; i < no; i++)
    {
        emp[i].name = malloc(100 * sizeof(char));

        printf("Enter Name of %dth Employee: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter Salary of %dth Employee: ", i + 1);
        scanf("%f", &emp[i].salary);
    }
    for (int i = 0; i < no; i++)
    {
        printf("Employee %d Name: %s\n", i + 1, emp[i].name);
        printf("Employee %d Salary: %f\n", i + 1, emp[i].salary);
    }
    free(emp);

    return 0;
}
