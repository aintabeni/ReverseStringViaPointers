#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *startPtr;
    char temp;
    char *endPtr;
    char str[] = "Test";

    startPtr = str;
    endPtr = str + strlen(str) - 1;

    for (; endPtr >= startPtr; endPtr--, startPtr++)
    {
        temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;
    }

    cout << str;
}