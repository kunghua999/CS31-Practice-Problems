#include <iostream>
#include <string>
using namespace std;

int countNonChar(string s)
{
    int total = 0;
    for (int k = 0; k != s.size(); k++)
    {
        if ( !isalpha(s[k]) )
            total++;
    }
    return total;
}

int main()
{
    string str = "Hello World!";
    cout << countNonChar(str) << endl;
}
