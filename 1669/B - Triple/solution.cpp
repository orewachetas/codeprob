#include <iostream>
#include <vector> 
#include <unordered_map>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for( auto &it: arr){
            cin >> it;
        }
 
        unordered_map<int,int> mp;
        for(int j =0;j<n;j++){
            mp[arr[j]]++;
        }
 
        int flag = 0;
 
        for(auto &it: mp){
            if(it.second >= 3) {
                cout << it.first << "
";
                flag = 1;
                break;
            }
        }
 
        if (!flag) cout << -1 << '
';
    }
 
 
}