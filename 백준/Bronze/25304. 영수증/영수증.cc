#include <iostream>
using namespace std;

int main() {
    long long X;
    int N;
    cin >> X >> N;

    long long total = 0;
    for (int i = 0; i < N; i++) {
        long long a, b;
        cin >> a >> b;
        total += a * b;
    }

    if (total == X) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}