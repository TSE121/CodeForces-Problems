#include <iostream>

using namespace std;

int countMovestillParity(int arr[], int Len)
{
    int oddMisplaced = 0, evenMisplaced = 0;

    for (int i = 0; i < Len; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 == 1)
        {
            // index is even, but the item isn't
            oddMisplaced++;
        }
        else if (arr[i] % 2 == 0 && i % 2 == 1)
        {
            // index is odd but the item is even
            evenMisplaced++;
        }
    }

    if (evenMisplaced != oddMisplaced)
    {
        return -1;
    }

    return evenMisplaced;
}

int main()
{
    int tstCase, arrLen;
    cin >> tstCase;
    int arrSwapCount[tstCase];

    for (int i = 0; i < tstCase; i++)
    {
        cin >> arrLen;
        int arrIn[arrLen];
        for (int i = 0; i < arrLen; i++)
        {
            // cout << i;
            cin >> arrIn[i];
        }
        int swapCount = countMovestillParity(arrIn, arrLen);
        arrSwapCount[i] = swapCount;
    }

    for (int i = 0; i < tstCase; i++)
    {
        // cout << i;
        cout << arrSwapCount[i] << endl;
    }

    // cout << swapCount;

    return 0;
}