#include<iostream>
#include<queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    queue<int> q;

    for(int i = 1; i <= n; i++) {
        q.push(i);
    }
    for(int i = 1; i <= n; i++) {
        cout << q.front() << " ";
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << "\n";
    return 0;
}