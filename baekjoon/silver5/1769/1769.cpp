#include<iostream>
#include<string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin >> str;
    int tmp = 0;
    int n = str.length();
    if(n == 1) {
        tmp = stoi(str);
        cout << "0\n";
        if(tmp % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
        return 0;
    }
    for(int i = 0; i < n; i++) {
        tmp += stoi(str.substr(i, 1));
    }
    n = tmp;
    int cnt = 1;
    while(true) {
        tmp = 0;
        while(n) {
            tmp += n % 10;
            n /= 10;
        }
        cnt++;
        if(tmp < 10) break;
        n = tmp;
    }
    cout << cnt << "\n";
    if(tmp % 3 == 0) cout << "YES\n";
    else cout << "NO\n";
}