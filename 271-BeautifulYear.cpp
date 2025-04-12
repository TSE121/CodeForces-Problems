    #include <iostream>

    using namespace std;

    int checkYear(int a)
    {
        int digits[10] = {0};

        while (a > 0)
        {
            int digit = a % 10;    // Extract the last digit
            if (digits[digit] > 0) // If digit has been seen before, return false
            {
                return 0;
            }
            digits[digit]++;
            a /= 10; // Remove the last digit
        }
        return 1;
    }
    int main()
    {
        int beautifulYear, yearInp;
        cin >> yearInp;
        yearInp += 1;
        while (yearInp < 9999)
        {
            if (checkYear(yearInp))
            {
                beautifulYear = yearInp;
                break;
            }
            yearInp++;
        }
        cout << beautifulYear << endl;
        return 0;
    }