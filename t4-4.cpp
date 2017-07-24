#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

char* strdup(const char *a)
{
    char *b = malloc(strlen (a) + 1);
    if (b == NULL)
    {
        return 0;
    }
/*  if (b != NULL)
    {
        strcpy (b,a);
    }
*/

    return b;
}

int main()
{
    string* a = {"abcde fe"};
    strdup(a);

//    cout << b;

   return 0;
}


