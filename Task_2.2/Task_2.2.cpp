#include <string> 
#include <iostream>
#include <sstream>
using namespace std;

template <typename T>
std::string NumberToString(T Number)
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}
int main()
{
    int s;
    string s1;
    cin >> s;
    s1 = NumberToString(s);
    cout << endl << s1;
}