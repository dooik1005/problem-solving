#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr1[100][100];
    int arr2[100][100];
    int res[100][100];

    int n, m, k;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }
    }
    cin >> m >> k;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            cin >> arr2[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            int sum = 0; 
            for(int a = 0; a < m; a++) {
                sum += arr1[i][a] * arr2[a][j];
            }
            cout << sum << " ";
        }
        cout << "\n";
    }
}