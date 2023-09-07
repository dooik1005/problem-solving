#include<iostream>
#include<algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    int arr[50];
    int tmp[50];
    int ans[50];
    bool visited[50];
    cin >> n;

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arr[i] = k;
        tmp[i] = k;
        visited[i] = false;
    }
    sort(tmp, tmp + n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] == tmp[j] && !visited[j]) {
                ans[i] = j;
                visited[j] = true;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;


}