#include<stdio.h>
#include<math.h>

int main()
{
    int averageScore = 0;
    puts("Enter the average score of the student to print the result ");
    scanf("%d", &averageScore);
    if(averageScore >= 0 && averageScore <= 49)
        puts("Result is Fail");
    else if(averageScore >= 50 && averageScore <= 70)
        puts("Result is First class");
    else if(averageScore >= 71 && averageScore <= 90)
        puts("Result is Distinction");
    else if(averageScore >= 91 && averageScore <= 100)
        puts("Result is Topper");
    else
        puts("Invalid Number");
    return 0;
}
