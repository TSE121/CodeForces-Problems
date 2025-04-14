#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int t, strLen;
    cin >> t;
    string str;

    while (t > 0)
    {
        cin >> strLen;
        cin >> str;
        string finalSound = "";
        // finalSound += str[0];
        for (int i = 0; i < strLen; i++)
        {
            str[i] = std::tolower(static_cast<unsigned char>(str[i]));
        }

        char temp = '\0';
        for (int i = 0; i < strLen; i++)
        {
            if (str[i] != temp)
            {
                temp = str[i];
                finalSound += temp;
                // cout << "string value - " << str[i] << "  " << "temp value - " << temp << "  " << "final sound - " << finalSound << endl;
            }
            else if (str[i] == temp)
            {
                continue;
            }
        }
        // cout << str << endl;
        // cout << finalSound << endl;
        t--;
        if (finalSound == "meow")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
