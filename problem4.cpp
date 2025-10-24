#include <iostream>
using namespace std;

int reverse(int n, int r = 0) {
    return n == 0 ? r : reverse(n / 10, r * 10 + n % 10);
}

int main() {
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}
