#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b,c,d,e,f,g,h,i,j;
    int A=0,B=0,C=0;
        printf("Input the score of a:");
        scanf("%d",&a);
        if (a>=0 && a<=100)
        {
            if (a<=59)
            printf("C\n");
            if (a>=60 && a<=75)
                printf("B\n");
            if (a>=76 && a<=100)
                printf("A\n");
                }
                else
                printf("Error!");

                system ("pause");
                return 0;
        }
