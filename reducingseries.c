#include<stdio.h>
int main()
{
int n,l,s,e;
printf("Enter no.\n");
scanf("%d",&n);
l=2*n-1;
s=0;
e=l-1;
int arr[l][l];
do
{
    for (int i = s; i <= e; i++)
    {
        for (int j = s; j <= e; j++)
        {
            if (i==s||j==s||i==e||j==e)
            {
                arr[i][j]=n;
            }
            
        }
        
    }
    ++s;
    --e;
    --n;
    
} while (n!=0);
for (int i = 0; i < l; i++)
{
    for (int j = 0; j < l; j++)
    {
        printf("%d  ",arr[i][j]);
    }
    printf("\n");
}

system("pause");
return 0;
}