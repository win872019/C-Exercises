//§Ñ¥[breakªºswitch±Ô­z

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char grade;
    printf("Input grade¡G");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'a':
        case'A':
         printf("Excellent!\n");
                 case 'b':
        case'B':
         printf("Good!\n");

        case 'c':
        case 'C':
         printf("Be study hard!\n ");


        default:
        printf("Failed¡I\n");

    }

    system("pause");
    return 0;
}
