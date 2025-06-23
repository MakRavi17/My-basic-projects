#include <iostream>
using namespace std;

int main()
{

    int n1 = 1, n2 = 1, n3;

    for (int i = 3;; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        int temp = n3;
        int count = 0;

        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }

        if (count == 1000)
        {
            cout << i;
            break;
        }
    }

    return 0;
}