#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char *name;
    char *subject;
    char grade;
};

void set_data(struct Student *stu, int no)
{
    for (int i = 0; i < no; i++)
    {
        stu[i].name = malloc(100 * sizeof(char));
        stu[i].subject = malloc(100 * sizeof(char));

        printf("Enter Name for student %d: ", i + 1);
        scanf("%s", stu[i].name);

        printf("Enter Subject for student %d: ", i + 1);
        scanf("%s", stu[i].subject);

        printf("Enter Grade for student %d: ", i + 1);
        scanf(" %c", &stu[i].grade);
    }
}

int main()
{
    int no;
    printf("Enter count of students: ");
    scanf("%d", &no);

    struct Student *stu = malloc(no * sizeof(struct Student));

    set_data(stu, no);

    for (int i = 0; i < no; i++)
    {
        printf("Student %d: Name: %s, Subject: %s, Grade: %c\n", i + 1, stu[i].name, stu[i].subject, stu[i].grade);
    }
    free(stu);

    return 0;
}
