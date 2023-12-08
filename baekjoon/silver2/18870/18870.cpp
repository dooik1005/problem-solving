#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.first < p2.first;
}
int main() {
    vector<int> list;
    vector<pair<int, int> > tmp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        list.push_back(k);
        tmp.push_back(make_pair(k, 0));
    }
    sort(tmp.begin(), tmp.end(), compare); 
    int cnt = 0;
    for(int i = 1; i < n; i++) {
        if(tmp[i].first != tmp[i - 1].first) cnt++;
        tmp[i].second = cnt;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(list[i] == tmp[j].first ) {
                cout << tmp[i].second << " ";
                break;
            }
        }
    }
    cout << "\n";
    return 0;
}