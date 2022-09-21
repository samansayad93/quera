#include<iostream>
#include<cmath>

using namespace std;

int main() {
    long long int a, b, c = 0;
    cin >> a;
    while (a > 0) {
        c = c * 10 + a % 10;
        a = a / 10;
    }

    while (c > 0) {
        b = c % 10;
        c = c / 10;
        cout << b << ": ";
        for (long long int i = 0; i < b; i++) {
            cout << b;
        }
        cout << endl;
    }
}
