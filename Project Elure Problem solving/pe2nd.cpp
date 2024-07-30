#include <iostream>
using namespace std;

int main() {
    int n = 4000000;
    int n1 = 1, n2 = 2, n3;
    int sum = 2;

    while (n3 <= n) {
        n3 = n1 + n2;

        if (n3 % 2 == 0) {
            sum += n3;
        }

        n1 = n2;
        n2 = n3;
    }

    cout << "Sum of even-valued terms: " << sum <<endl;

    return 0;
}
