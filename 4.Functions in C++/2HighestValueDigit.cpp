#include <iostream>
using namespace std;
int digit(int);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Highest digit value is: " << digit(abs(n));
    return 0;
}
int digit(int a)
{
    int max = a % 10;
    a /= 10;
    while (a)
    {
        if (max < a % 10)
        {
            max = a % 10;
        }
        a /= 10;
    }
    return max;
}