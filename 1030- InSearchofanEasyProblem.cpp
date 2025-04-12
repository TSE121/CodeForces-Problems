#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int response[num];

    for (int i = 0; i < num; i++)
    {
        // cout << i;
        cin >> response[i];
    }

    bool isHard = false;
    for (int j = 0; j < num; j++)
    {
        if (response[j] != 0)
        {
            isHard = true;
            break;
        }
    }
    if (isHard)
        cout << "HARD";

    else
        cout << "EASY";

    return 0;
}