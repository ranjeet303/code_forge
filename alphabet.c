#include <stdio.h>

void Print_alpha(char *ch);

int main()
{
    char ch;
    Print_alpha(&ch);
    return 0;
}
void Print_alpha(char *ch)
{

    for (*ch = 'a'; *ch <= 'z'; (*ch)++)
    {
        printf("%c ", *ch);
    }
}