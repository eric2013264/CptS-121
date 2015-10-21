#include "Header.h"

int main (void)
{
    char *name = "bob";
    int result = 0, pos = 0;

    result = pallindrome(name, pos);

    if (result ==1)
    {
        printf("Yes it is a pallendrome\n");
    }
    else
    {
        printf("Not a pallindrome\n");
    }

    _getch();
    return 0;
}