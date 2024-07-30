#include <iostream>
#include <unordered_map>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 1; // 1 is always a divisor
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (n / i != i) { // avoid counting the same divisor twice for perfect squares
                sum += n / i;
            }
        }
    }
    return sum;
}

int main() {
    unordered_map<int, int> divSumMap;
    int sumAmicable = 0;

    for (int i = 2; i < 10000; i++) {
        int sumDivisors = sumOfDivisors(i);
        if (sumDivisors != i && sumOfDivisors(sumDivisors) == i) {
            divSumMap[i] = sumDivisors;
            divSumMap[sumDivisors] = i;
            sumAmicable += i;
        }
    }

    cout << "Sum of amicable numbers under 10000: " << sumAmicable << endl;

    return 0;
}
