#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &it: arr){
            cin >> it;
        }
        int he = 0;
        int she = 0;
        for (int j = 0; j < n; j++){
            if(arr[j]%2 == 0){
                he += arr[j];
            }
            else{
                she += arr[j];
            }
        }
        
        if (he > she){
            cout << "YES" << "
";
        }
        else{
            cout << "NO" << "
";
        }
    }
}