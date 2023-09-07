#include<iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;

    int l, r;
    for(int i = 0; i < t; i++) {
        cin >> l >> r; 
        bool flag = true;
        if(l == r) {
            if(l % 2 == 0 && l != 2) {
                cout << 2 << " " << l - 2 << "\n";
                flag = false;
            } else {
                for(int j = 2; j <= l / 2; j++) {
                    if(gcd(j, l - j) != 1) {
                        cout << j << " " << l - j << "\n";
                        flag = false;
                        break;
                    }
                }
            }
        } else if(r % 2 == 0 && r != 2) {
            cout << 2 << " " << r - 2 << "\n";
            flag = false;
        } else if(l % 2 == 0 && l != 2) {
            cout << 2 << " "  << l - 2 << "\n";
            flag = false;
        } else {
            for(int j = l; j <= r; j++) {
                for(int k = 2; k <= j / 2; k++) {
                    if(gcd(k, j - k) != 1) {
                        cout << k << " " << j - k << "\n";
                        flag = false;
                    }
                }
                
            }
        }
        if(flag) cout << -1 << "\n";
    }
    return 0;
}