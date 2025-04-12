/*1989-A. Is It a Cat?



*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    // No of test cases.
    unsigned int N;
    cin >> N;
    int answers[N];
    std::string sound;
    string soundLower, soundCompressed;
    int len;

    while (N--)
    {

        cin >> len;
        cin >> sound;
        string soundLower = "", soundCompressed = "";

        for (int i = 0; i < len; i++)
        {
            soundLower[i] = tolower(sound[i]);
            if (i > 0 || soundLower[i] != soundLower.back())
            {
                soundCompressed += soundLower[i];
            }
        }
        if (soundCompressed == "meow")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
