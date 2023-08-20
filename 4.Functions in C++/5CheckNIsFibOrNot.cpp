#include <iostream>
void checkFib(int);
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    checkFib(n);
    return 0;
}
void checkFib(int n)
{
    int a = -1, b = 1, c;
    while (c <= n)
    {
        c = a + b;
        if (c == n)
        {
            cout << n << " is in fibonacci series.";
            break;
        }
        a = b;
        b = c;
    }
    if (c > n)
        cout << n << " is not in fibonacci series";
}