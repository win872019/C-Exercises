#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1,n2;
    float num1=3.002F,num2=3.988F;

    n1=(int) num1;         /*�Nfloat num1�ഫ�����*/
    n2=(int) num2;         /*�Nfloat num2�ഫ�����*/

    printf("num1=%f, num2=%f\n",num1,num2);   /*�L�X�B�I�ƪ���*/
    printf("n1=%d, n2=%d\n",n1,n2);         /*�L�X�B�I���ন��ƫ᪺��*/

    system("pause");
    return 0;
}

