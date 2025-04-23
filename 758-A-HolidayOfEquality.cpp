#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[1000000];
    int max_income = 0, welfare_spent = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (a[j] > max_income)
        {
            max_income = a[j];
        }
    }

    // cout << max_income << endl;

    for (int k = 0; k < n; k++)
    {
        if (a[k] != max_income)
        {
            welfare_spent += (max_income - a[k]);
        }
    }

    cout << welfare_spent << endl;
    // return 0;
}