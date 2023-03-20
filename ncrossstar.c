#include<stdio.h>

int main()
{
    int n;
    printf("Enter no.\n");
    scanf("%d",&n);
    int a;
    a=2*n-1;
    for (int i = 0; i < a; i++)
    {
       for (int j = 0; j < a; j++)
       {
        if (i==j||a==(i+j+1))
        {
            printf("* ");
        }
        else
        printf("  ");
       }
       printf("\n");
    }
    
   
   return 0;
   
}


