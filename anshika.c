#include<stdio.h>
int main()
{
    for (int i = 0; i <= 4; i++)
    {
       for (int j = 0; j <=4; j++)
       {
        if ((i==3&&j==1)||i==j||(i==4&&j==0)||(i==0&&j==4)||(i==1&&j==3))
        {
            printf("* ");
        }
        else
        printf("  ");
       }
       printf("\n");
    }
    system("pause");
   return 0;
}


