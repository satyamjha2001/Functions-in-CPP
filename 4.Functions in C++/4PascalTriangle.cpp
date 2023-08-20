#include <iostream>
#include<iomanip>
using namespace std;
void pascal(int);
int ncr(int, int);
int fact(int);
int main()
{
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    pascal(n);
    return 0;
}
void pascal(int n)
{
    int i, j, k = 1, r;
    for (i = 0; i < n; i++)
    {
        r = 0;
        for (j = 1; j <= (2 * n - 1); j++)
        {
            if (j >= (n - i) && j <= (n + i) && k)
            {
                cout << setw(2)<< ncr(i, r);
                r++;
                k = 0;
            }
            else
            {
                cout << "  ";
                k = 1;
            }
        }
        cout << endl;
    }
}
int fact(int a)
{
    int f = 1;
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= a; i++)
        {
            f *= i;
        }
    }
    return f;
}
int ncr(int n, int r)
{
    return (fact(n) / (fact(n - r) * fact(r)));
}