#include <bits/stdc++.h>
using namespace std;

bool checkDistance(int x, int y)
{
    int x_term = x * x;
    int y_term = y * y;
    int d = sqrt(x_term + y_term);
    return (d * d - x_term == y_term && d * d - y_term == x_term);
}

void performTest()
{
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "0\n";
        return;
    }
    if (checkDistance(x, y))
    {
        cout << 1;
    }
    else
    {
        cout << 2;
    }
    cout << "\n";
}

int main()
{
    int tcs = 1;
    cin >> tcs;
    for (int t = 0; t < tcs; t++)
    {
        performTest();
    }
    return 0;
}