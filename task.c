#include <stdio.h>

int main()
{

    char student_name[3][50];
    int student_marks[3][3];

    for (int i = 0; i < 3; i++)
    {

        printf("please enter students name:");
        scanf(" %[^\n]", student_name[i]);

        printf("please enter hindi marks:");
        scanf("%d", &student_marks[i][0]);

        printf("please enter english marks:");
        scanf("%d", &student_marks[i][1]);

        printf("please enter science marks:");
        scanf("%d", &student_marks[i][2]);
    }

    printf("**********result**********\n");

    for (int i = 0; i < 3; i++)
    {

        printf("student_name is %s\n", student_name[i]);
        printf("student_marks hindi %d\n", student_marks[i][0]);
        printf("student_marks english %d\n", student_marks[i][1]);
        printf("student_marks science %d\n", student_marks[i][2]);
    }

    return 0;
}