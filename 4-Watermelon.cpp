    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int wgt;
        cin >> wgt;

        // if the is even
        if (wgt > 2 && wgt % 2 == 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
        return 0;
    }