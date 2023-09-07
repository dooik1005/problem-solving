#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    int number_of_traps;
    double d, s;
    for(int i = 0; i < t; i++) {
        vector<pair<double, double> > traps;
        double time = 9999999;
        cin >> number_of_traps;

        for(int j = 0; j < number_of_traps; j++) {
            cin >> d >> s;
            traps.push_back(make_pair(d, s));
        }
        for(auto iter = traps.begin(); iter != traps.end(); iter++) {
            if(time >= (iter->first - 1) + ceil(iter->second / 2)) time = (iter->first - 1) + ceil(iter->second / 2);
        }
        if(time == 9999999) cout << 1 << "\n";
        else cout << time << "\n";

    }   
    return 0;
}