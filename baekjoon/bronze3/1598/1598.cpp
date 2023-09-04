#include<iostream>
#include<cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b, c, d;
    double m, n;

    cin >> a >> b;
    m = a % 4;
    if(m == 0) m = 4;
    n = b % 4;
    if(n == 0) n = 4;
    c = abs(m - n);
    d = abs(ceil(a / 4.0) - ceil(b / 4.0));
    cout << c + d << "\n";
    return 0;
}