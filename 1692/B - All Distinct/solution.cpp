#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i <t; i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &it: arr){
            cin >> it;
        }
        int len_arr = arr.size();
        set<int> unique_items(arr.begin(), arr.end());
        int unique = unique_items.size();
        if((len_arr - unique)% 2 == 0){
            cout << unique << "
";
        }
        else{
            cout << unique - 1 << "
";
        }
    }
}