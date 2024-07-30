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
    int sum = 0;

    while (true)
    {
        if (isPrime(number))
        {
            count++;
            cout<<number<<" ";
            sum = sum + number;
        }
        if (number == 2000000)
        {
            break;
        }
        number++;
        
    }

    cout<<"sum = "<<sum;

    return 0;
}