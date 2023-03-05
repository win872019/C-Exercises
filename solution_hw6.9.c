#include<stdio.h>
int main(void)
{
int score;
int count=0,count1=0,count2=0,count3=0;

here:
printf("輸入學生成績：");
scanf("%d",&score);

count++;

if (score>75)
{
printf("成績為A\n");
count1++;
}

else if (score>60)
{printf("成績為B\n");
count2++;
}

else
{printf("成績為C\n");
count3++;
}
if (count<10)goto here;

printf("已輸入10位學生的成績\n\n");

printf("成績為A者共有%d位\n",count1);

printf("成績為B者共有%d位\n",count2);

printf("成績為C者共有%d位\n",count3);
}
