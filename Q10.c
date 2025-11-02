//  Implement a program to find who and how many students scored “99” in the marks array,
// emphasising data scanning and frequency counting

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter marks of student %d:\n", i + 1);
        scanf("%d", &marks[i]);
    }
    int count = 0;
    printf("\nStudents who scored 99:\n");
    for (i = 0; i < n; i++)
    {
        if (marks[i] == 99)
        {
            printf("student %d scored 99\n", i + 1);
            count++;
        }
    }

    printf("number of students who scored 99: %d\n", count);

    return 0;
}