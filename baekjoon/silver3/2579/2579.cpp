#include<iostream>

using namespace std;

int arr[300];
int dp[300];

int sol(int n) {
    if(n == 1) {
        return arr[0];
    } else if(n == 2) {
        return arr[0] + arr[1];
    } else {
        dp[0] = arr[0];
        dp[1] = arr[0] + arr[1];
        for(int i = 2; i < n; i++) {
            dp[i] = max((dp[i - 3] + arr[i - 1] + arr[i]), dp[i - 2] + arr[i]);
        }
        return dp[n - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sol(n) << "\n";
    return 0;

}