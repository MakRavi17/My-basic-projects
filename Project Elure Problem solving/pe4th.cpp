#include <iostream>
using namespace std;

bool isPelindrome(int x)
{

    int n, num, rev = 0, digit;

    n = num;

    do
    {
        digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    } while (n != 0);

    if (n == rev)
    {
        return true;
    }

    return false;
}

int main()
{

    int sum;
    for (int i = 100; i > 10; i--)
    {
        for (int j = 100; j > 10; j--)
        {
            sum = i * j;
        }
    }

    if (isPelindrome(sum))
    {
        cout << sum << " ";
    }

    return 0;
}