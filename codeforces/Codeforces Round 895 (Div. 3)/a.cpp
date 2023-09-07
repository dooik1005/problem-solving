#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a, b, c;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        int cnt = 0;
        if(a <= b) {
            while(true) {
                if(a >= b) break;
                a += c;
                b -= c;
                cnt++;
            }
        } else {
            while(true) {
                if(a <= b) break;
                b += c;
                a -= c;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}