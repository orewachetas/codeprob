#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0;i <t;i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &it: arr){
            cin >> it;
        }
        std::sort(arr.begin(), arr.end());
        int increase = true;
        for(int k = 0; k < n-1;k++){
            if (arr[k+1] <= arr[k]){
                increase = false;
            }
        }
        if(increase){
            cout << "YES" << "
";
        }
        else{
            cout << "NO" << "
";
        }
    }
}