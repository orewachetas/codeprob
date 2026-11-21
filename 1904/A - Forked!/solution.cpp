#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i <t;i++){
        int a, b, xk, yk, xq, yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        int high = 0;
        vector<pair<int, int>> arr_k = {{xk+a, yk+b}, {xk+a, yk-b}, {xk-a, yk+b}, {xk-a, yk-b}, {xk+b, yk+a}, {xk+b, yk-a}, {xk-b, yk+a}, {xk-b, yk-a}};
        vector<pair<int, int>> arr_q = {{xq+a, yq+b}, {xq+a, yq-b}, {xq-a, yq+b}, {xq-a, yq-b}, {xq+b, yq+a}, {xq+b, yq-a}, {xq-b, yq+a}, {xq-b, yq-a}};
        sort(arr_k.begin(), arr_k.end());
        arr_k.erase(unique(arr_k.begin(), arr_k.end()), arr_k.end());
        sort(arr_q.begin(), arr_q.end());
        arr_q.erase(unique(arr_q.begin(), arr_q.end()), arr_q.end());
        for(int j = 0;j<(int)arr_q.size();j++){            
            if (binary_search(arr_k.begin(), arr_k.end(), arr_q[j])){
                high++;
            }
        }
        cout << high << "
";
    }
}