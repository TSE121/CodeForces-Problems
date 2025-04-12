#include <iostream>
using namespace std;

// Fast Exponentiation: Exponentiation by Squaring
long long int power(int base, long long int exponent)
{
    long long int result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        { // If exponent is odd
            result *= base;
        }
        base *= base;  // Square the base
        exponent /= 2; // Divide the exponent by 2
    }
    return result;
}

int main()
{
    long long int exponent;

    cin >> exponent;

    long long int resultant = power(5, exponent);
    int result = resultant % 100;
    cout << result << endl;

    return 0;
}
