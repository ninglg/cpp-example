#include <iostream>
#include <vector>
#include <string>
#include "str.h"

using namespace std;

int main()
{
    // vector + string
    vector<string> str;
    str.push_back("abc");
    str.push_back("xyz");

    vector<string>::iterator iter;

    for (iter = str.begin(); iter != str.end(); iter++) {
        cout << *iter << endl;
    }

    // const
    cout << num << endl;

    // typedef
    tip c = 8;
    cout << c << endl;

    // enum
    Color d = Green;
    cout << d << endl;

    return 0;
}
