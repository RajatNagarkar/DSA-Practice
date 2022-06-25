#include <bits/stdc++.h>

using namespace std;

double myPower(double, int);

double myPow(double x, int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
    {
        return 1 / myPower(x, abs(n));
    }
    return myPower(x, n);
}

double myPower(double x, int n)
{
    if (n <= 1)
    {
        return x;
    }
    return x * myPow(x, n - 1);
}

int main()
{

    double x;
    int n;
    cin >> x >> n;
    cout << myPow(x, n);

    return 0;
}