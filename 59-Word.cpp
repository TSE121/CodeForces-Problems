#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
int main()
{
    // define string
    std::string s;
    cin >> s;

    int strLength, upperCount = 0, lowerCount = 0;
    strLength = s.length();

    for (int i = 0; i < strLength; i++)
    {
        if (isupper(s[i]))
            upperCount += 1;

        else if (islower(s[i]))
            lowerCount += 1;
    }

    if (lowerCount >= upperCount)
    {
        for (int j = 0; j < strLength; j++)
            s[j] = tolower(s[j]);
    }
    else if (lowerCount < upperCount)
    {
        for (int k = 0; k < strLength; k++)
            s[k] = toupper(s[k]);
    }
    cout << s << endl;
}
