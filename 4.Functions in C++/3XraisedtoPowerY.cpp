#include <iostream>
using namespace std;
float power(float, float);
int main()
{
    float x, y;
    cout << "Enter value of \"x\" and \"y\" for calculating power: ";
    cin >> x >> y;
    cout <<"\"x\" raise to \"y\" is : "<< power(x, y);
    return 0;
}
float power(float x, float y)
{
    float p = 1;
    if (y == 0)
        return 1;
    if (y > 0)
        return x * power(x, y - 1);
    else
        return (1 / x) * power(x, y + 1);
}