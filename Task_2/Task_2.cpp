#include <iostream>
using namespace std;
void IsModule(int n);
void Sum(int n, int m, int b);
int main()
{
    int n, m, b;
    cout << "Введіть число\n";
    cin >> n;
    cout << "Введіть число\n";
    cin >> m;
    cout << "Введіть число\n";
    cin >> b;
    IsModule(n);
    Sum(n, m, b);
}
void IsModule(int n)
{
    if (n >= 0)
    {
        cout << "Число додатнє.\n";
    }
    else 
    {
        cout << "Число від'ємне.\n";
    }
}
void Sum(int n, int m, int b)
{
    cout << n + m + b;
}