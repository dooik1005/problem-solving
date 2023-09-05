#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
    string token;
    string str;
    getline(cin, str);
    string tmp = "";
    for(int i = 0; i < str.length(); i++) {
        if(str[i] <= 'Z') tmp += str[i];
    }
    string ans = "UCPC";
    int idx = 0;
    for(int i = 0; i < tmp.length(); i++) {
        if(ans[idx] == tmp[i]) {
            idx++;
        }
        if(idx == 4) { 
            cout << "I love UCPC\n";
            return 0;
        }
    }
    cout << "I hate UCPC\n";
    
    return 0;
}