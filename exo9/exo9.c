#include <stdio.h>
int main()
{
    float marks[3][2];
    int i,j;
    for( i=0; i<3; i++)
    {
        /* input of marks from the user */
        printf("Enter marks of student %d\n", (i+1) );
        for( j=0; j<2; j++)
        {
            printf("Subject %d\n", (j+1) );
            scanf("%f", &marks[i][j]);
        }
    }
    /* printing the marks of students */
    for( i=0; i<3; i++)
    {
        printf("Marks of student %d\n", (i+1) );
        for( j=0; j<2; j++)
        {
            printf("Subject %d : %f\n", (j+1), marks[i][j] );
        }
    }
    return 0;
}