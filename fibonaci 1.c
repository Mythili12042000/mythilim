#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    scanf("%d", &n);
{
 
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
