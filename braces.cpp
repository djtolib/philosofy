#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int braces = 0;
    int  i, n = str.length();
    for (i=0; i < n; ++i)
    {
        if (str[i] == '(')
        {
            ++braces;
        }
        else if (str[i] == ')')
        {
            if (--braces < 0)
                break;
        }
    }
    cout << (braces? 0: 1) << std::endl;

}