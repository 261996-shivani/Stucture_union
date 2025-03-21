#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
void input_date(struct Date *D1)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Enter Day for Date(D%d):",i+1);
        scanf("%d", &D1[i].day);
        printf("Enter Month for Date(D%d):",i+1);
        scanf("%d", &D1[i].month);
        printf("Enter Year for Date(D%d):",i+1);
        scanf("%d", &D1[i].year);
    }
}
void display_date(struct Date *D1)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Date: %02d/%02d/%d\n", D1[i].day, D1[i].month, D1[i].year);
    }
}
void earliest_date(struct Date *D1)
{
    int i = 0;
    printf("Earliest date is Shown below:\n");

    if (D1[i].day > D1[i + 1].day && D1[i].month > D1[i + 1].month && D1[i].year > D1[i + 1].year)
    {
        printf("Date: %02d/%02d/%02d\n", D1[i + 1].day, D1[i + 1].month, D1[i + 1].year);
    }
    else
    {
        printf("Date: %02d/%02d/%02d\n", D1[i].day, D1[i].month, D1[i].year);
    }
}
int main()
{
    struct Date D1[2];
    input_date(D1);
    printf("Display Date:\n");
    display_date(D1);
    printf("Find Earliest Date in both of them: \n");
    earliest_date(D1);
}