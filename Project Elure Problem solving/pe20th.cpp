#include <iostream>
using namespace std;

int facto(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    cout << "Factorial = " << facto(100) << endl;

    int modulas, sum = 0, num = facto(100);

    while (num > 0)
    {
        sum = sum + (num % 10); 
        num = num / 10;        
    }

    cout << "sum = " << sum;

    return 0;
}