#include <iostream>

using namespace std;

int main() {
    int a, b;
    long long sum = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        sum += i*i;
    }

    cout << sum;

    return 0;
}