#include <iostream>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    
    int count = 0;
    int number = 2;

    while (true)
    {
        if (isPrime(number))
        {
            count++;
        }
        if (count == 10001)
        {
            break;
        }
        
        number++;
    }

    cout << "The 10001 st prime number is: " << number << endl;

    return 0;
}