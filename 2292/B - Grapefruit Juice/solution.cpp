#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long n, k, p;
        cin >> n >> k >> p;
 
        vector<long long> a(n);
        long long sum = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            sum += a[j];
        }
        sort(a.begin(), a.end());
 
        long long best = sum;   
        long long glasses = 0;
 
        for (long long j = 0; j + k <= n; j += k) {
            
            glasses++;
            for (long long x = j; x < j + k; x++) {
                sum -= a[x];
            }
            long long total = glasses * p + sum;
            best = max(best, total);
        }
 
        cout << best << "
";
    }
    return 0;
}