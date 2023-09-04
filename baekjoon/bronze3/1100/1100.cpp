#include<iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int cnt = 0;

    for(int i = 0; i < 8; i++) {
        string str;
        cin >> str;
        for(int j = 0; j < 8; j++) {
            if(str[j] == 'F') {
                if(((i + j) % 2) == 0) cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}