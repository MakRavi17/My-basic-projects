#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{

    long long n = 600851475143;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
            {
                cout<<i<<" ";
            }
            
        }
    }

    return 0;
}