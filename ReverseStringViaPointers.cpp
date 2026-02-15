#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *startPtr;
    char temp;
    char *endPtr;
    char str[] = "This is a test";

    startPtr = str;
    endPtr = str + strlen(str) - 1; // using pointer arithmetic to get the last item's address

    while (endPtr > startPtr)
    {
        temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;
        //Incrementing/decrementing the position of the pointers
        endPtr--;
        startPtr++;
    }

    cout << str;
}