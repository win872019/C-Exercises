#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float height,weight;

    printf("��J���� �魫�G");
    scanf("%f %f",&height,&weight);

    if (weight>90 && height<180)
    printf("�魫�L��\n");
    else
    printf("���|�L��\n");


    system("pause");
    return 0;
}
