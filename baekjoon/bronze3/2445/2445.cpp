#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    n *= 2;
    int k = n - 1;

    for(int i = 1; i <= k / 2; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int j = k - 2 * i + 1; j != 0; j--) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    while(n--) {
        cout << "*";
    }
    cout << "\n";
    for(int i = k / 2; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int j = k - 2 * i + 1; j != 0; j--) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}