#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n) {
    if (n == 0 || n == 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int l, k;
    bool flag = false;
    string s;
    cin >> l >> k >> s;
    for (int i = 0; i <= l - k; ++i) {
        string sub = s.substr(i, k);
        int num = stoi(sub);
        if (isPrime(num)) {
            cout << sub << '\n';
            flag = true;
            break;
        }
    }
    if (!flag) cout << "404\n";

    return 0;
}