#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char grade;
    printf("Input grade�G");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'a':
        case'A':
         printf("Excellent!\n");
         break;
        case 'b':
        case'B':
         printf("Good!\n");
         break;
        case 'c':
        case 'C':
         printf("Be study hard!\n ");
         break;

        default:
        printf("Failed�I\n");

    }

    system("pause");
    return 0;
}
