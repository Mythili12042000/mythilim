#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1;
scanf("%d",&n);
    if (n < 0)
     else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
       }

    return 0;
}
