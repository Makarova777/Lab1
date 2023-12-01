#include <iostream>
#include <cmath>

using namespace std;

float foo(double x)
{
    double y;
    if (x <= -6)
    {
        y = 1;
    }
    else if (x > -6 && x <= -4)
    {
        y = -0.5 * x - 2;
    }
    else if (x > -4 && x <= 0)
    {
        y = sqrt(4 - pow((x + 2), 2));
    }
    else if (x > 0 && x < 2)
    {
        y = -sqrt(1 - pow((x - 1), 2));
    }
    else if (x >= 2)
    {
        y = -x + 2;
    }
    return y;
}

int main()
{
    int i;
    for (i = -6; i < 3; i++)
    {
        double x = i;
        cout << " y = " << foo(x) << endl;
    }

    return 0;
}