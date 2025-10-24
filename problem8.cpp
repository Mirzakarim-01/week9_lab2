#include <iostream>
using namespace std;

int sumEven(int n) {
    if (n == 0) return 0;
    if (n % 2 == 0) return n + sumEven(n - 1);
    return sumEven(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sumEven(n);
    return 0;
}
