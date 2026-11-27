#include <iostream>
#include <numeric>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int l, a, b;
        cin >> l >> a >> b;
        int hcf_a = gcd(l, a);
        int hcf_b = gcd(l, b);
        int common = lcm(hcf_a, hcf_b);
        cout << l / common << "
";
    }
    return 0;
}