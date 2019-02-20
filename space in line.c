#include <stdio.h>

int main()
{
    char in_name[80];
    FILE *in_file;
    int ch, character = 0, line = 0, space = 0, tab = 0;
    scanf("%s", in_name);
in_file = fopen(in_name, "r");
if (in_file == NULL)
    else
    {
        while ((ch = fgetc(in_file)) != EOF)
        {
            character++;
            if (ch == ' ')
                space++;
            if (ch == '\n')
                line++;
            if (ch == '\t')
                tab++;
        }
        fclose(in_file);
        
       }
    return 0;
}
