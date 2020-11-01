#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <winuser.h>

int main(int argc, char *argv[])
{
    assert(argc - 1);

    std::vector<char *> s(argv + 1, argv + argc);
    char *ptr;

    for (auto i : s)
    {
        int x = 0;
        while ((ptr = i + x) != '\0')
        {
            if (rand() & 1)
            {
                i[x] = toupper(i[x]);
            }
            else
            {
                i[x] = tolower(i[x]);
            }
        }
    }

    OpenClipboard(NULL);
    EmptyClipboard();
    

    return 0;
}