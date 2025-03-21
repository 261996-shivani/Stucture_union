#include <stdio.h>

union student {
    int rollNo;
    char name[32];
    double marks;
};

union student s;

int main()
{
    printf("Size of the Union = %d bytes\n", sizeof(union student));

    printf("Enter Name:- ");
    scanf("%s", s.name);
    printf("Student name is %s\n", s.name);

    printf("Enter Roll no:- ");
    scanf("%d", &s.rollNo);
    printf("Student roll no is %d\n", s.rollNo);

    printf("Enter Marks:- ");
    scanf("%lf", &s.marks);
    printf("Student percentage is %g\n", s.marks);

    printf("Student name is %s\n", s.name);
    printf("Student roll no is %d\n", s.rollNo);

    return 0;
}