#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float x,y;

    printf("��Jx,y�y�СG");
    scanf("%f,%f",&x,&y);


    if (x>0 && y>0)
        printf("(%.2f,%.2f)���Ĥ@�H��\n",x,y);

    else if (x>0 && y<0)
        printf("(%.2f,%.2f)���ĥ|�H��\n",x,y);

        else if (x<0 && y<0)
            printf("(%.2f,%.2f)���ĤT�H��\n",x,y);

            else if (x<0 && y>0)
                printf("(%.2f,%.2f)���ĤG�H��\n",x,y);

                else if (x==0 && y!=0)
                    printf("(%.2f,%.2f)���y�b�W\n",x,y);

                    else if (x!=0 && y==0)
                        printf("(%.2f,%.2f)���x�b�W\n",x,y);

                        else
                            printf("(%.2f,%.2f)�����I\n",x,y);

    system("pause");
    return 0;
}
