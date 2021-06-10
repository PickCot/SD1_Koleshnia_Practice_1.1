#include <iostream>
#include <conio.h>
using namespace std;
char Sigh(int, int);
//int main(int argc, _TCHAR* argv[])

int main()
{
    int a, b;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << a << Sigh(a,b) << b;
    return 0;
}
char Sigh(int x, int y)
{
    if (x > y)
    {
        return '>';
    }
    else if (x < y)
    {
        return '<';
    }
    else
    {
        return '=';
    }
}