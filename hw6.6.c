#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float height,weight;

    printf("輸入身高 體重：");
    scanf("%f %f",&height,&weight);

    if (weight>90 && height<180)
    printf("體重過重\n");
    else
    printf("不會過重\n");


    system("pause");
    return 0;
}
