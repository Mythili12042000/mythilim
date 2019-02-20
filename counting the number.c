#include <stdio.h>
int main()
{
    const char end = '.';
    int words = 1;
    char c = getchar();
    while (c != end)
    {
        c = getchar();
        if (c == ' ')
            words++;
    }
   
    getchar();
    getchar();
}
