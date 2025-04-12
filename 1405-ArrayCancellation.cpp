/*

Array Cancellation

*/

#include <iostream>

using namespace std;

int countCoinsUsed(long long int arr[], int n)
{
    long long int c = 0, coinCount = 0;
    for (int i = 0; i < n; i++)
    {
        c += arr[i];
        if (c > 0)
        {
            coinCount += c;
        }
    }
    return coinCount;
}

int main()
{

    int tst, a = 0, n;
    cin >> tst;
    long long int coinCountArr[tst];
    
    while (a < tst)
    {
        cin >> n;

        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        coinCountArr[a] = countCoinsUsed(arr, n);
        a++;
    }

    for (int k = 0; k < tst; k++)
    {
        cout << coinCountArr[k] << endl;
    }

    return 0;
}