#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        bool increase = false;
        bool decrease = false;
 
        for (int i = 1; i < (int)s.size() - 1; i++) {
            if (s[i - 1] == s[i] && s[i] == s[i + 1]) {
                increase = true;
            }
 
            if (s[i - 1] == s[i + 1] && s[i] != s[i - 1]) {
                decrease = true;
            }
        }
 
        cout << 1 + increase + decrease << '
';
    }
 
    return 0;
}