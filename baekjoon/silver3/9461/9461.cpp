#include<iostream>

using namespace std;

long arr[101];

void sol() {
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;
    for(int i = 6; i < 101; i++) {
        arr[i] = arr[i - 1] + arr[i - 5];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    sol();
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        cout << arr[k] << "\n";
    }
    return 0;

}