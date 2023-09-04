#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = n; j != i; j--) {
            cout << " ";
        }
        int k = 2 * i - 1;
        while(k--) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}