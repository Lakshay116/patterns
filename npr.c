#include <stdio.h>
#include<math.h>
int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {

        return ((a)*factorial(a - 1));
    }
}
int npr(int n, int r)
{
    long int per; //per for permutation
    per = factorial(n) / factorial(n - r);
    printf("\n%dp%d = %lu\n", n, r, per);
    return 0;
}
int ncr(int n, int r)
{
    long int com; //com for commbination
    com = factorial(n) / (factorial(n - r) * factorial(r));
    printf("\n%dc%d = %lu", n, r, com);
    return 0;
}
int main()
{
    int n, r;
    printf("Enter n and r\n");
    scanf("%d%d", &n, &r);
    printf("n = %d\nr = %d\n",n,r);
    npr(n, r);
    ncr(n, r);
    return 0;
}
