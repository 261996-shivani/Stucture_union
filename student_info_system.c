#include <stdio.h>
struct student
{
    char name[50];
    int Roll_no;
    int Marks_of_three_sub[3];
};
void Add_student(struct student *stu)
{

    printf("Enter Name of the student:");
    scanf(" %[^\n]", stu->name);
    printf("Enter Roll Number:");
    scanf("%d", &stu->Roll_no);
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d subject Marks:", i + 1);
        scanf("%d", &stu->Marks_of_three_sub[i]);
    }
}
void display(struct student *stu)
{
    int total = 0, avg = 0;
    printf("Name of the Student: %s\n", stu->name);
    printf("Roll  of the Student: %d\n", stu->Roll_no);
    for (int i = 0; i < 3; i++)
    {
        total += stu->Marks_of_three_sub[i];
        printf("Marks of the %d Subject: %d\n", i + 1, stu->Marks_of_three_sub[i]);
    }
    avg = total / 3;
    printf("Total Marks of the Student : %d\n", total);
    printf("Average Marks of that student: %d\n\n", avg);
}
int main()
{
    struct student stu[10];
    int op;
    int limit;
    while (1)
    {
        printf("1.Add Student\n2.Display Student\n3.Specific Student Data\n4.Exit\nEnter your choice:\n");
        scanf("%d", &op);

        if (op == 1)
        {
            printf("How many student you want to add:");
            scanf("%d", &limit);
            for (int  i = 0; i < limit; i++)
            {
                Add_student(&stu[i]);
            }
            
        }
        else if (op == 2)
        {
            for (int i = 0; i < limit; i++)
            {
                display(&stu[i]);
            }
            
        }
        else if (op == 3)
        {
            int ch;
            int total = 0, avg = 0;

            printf("Enter Roll No of which student you want data:");
            scanf("%d", &ch);
            ch--;
            printf("Name of the Student: %s\n", stu[ch].name);
            printf("Roll  of the Student: %d\n", stu[ch].Roll_no);
            for (int i = 0; i < 3; i++)
            {
                total += stu[ch].Marks_of_three_sub[i];
                printf("Marks of the %d Subject: %d\n", i + 1, stu[ch].Marks_of_three_sub[i]);
            }
            avg = total / 3;
            printf("Total Marks of the Student : %d\n", total);
            printf("Average Marks of that student: %d\n\n", avg);
        }
        else
        {
            break;
        }
    }
}