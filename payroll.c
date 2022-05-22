
#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    FILE *file = fopen("report.csv" , "a");

    if (file == NULL)
    {
        return 2;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    int totalsalary , salaryperday , daysworked  , payable ;



    printf("Total Salary: ");
    scanf("%i" , &totalsalary);

    salaryperday = totalsalary/30;

    printf("Days Worked:\n ");
    scanf(" %i" , &daysworked);

        payable = daysworked*salaryperday;


    fprintf(file, "%s,%s,%i,%i,%i\n" , name , number , totalsalary , salaryperday , payable);
    fclose(file);
}
