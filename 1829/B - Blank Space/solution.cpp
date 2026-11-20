#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t;i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it: arr){
            cin >> it;
        }
        int max_len = 0;
        int curr_len = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                max_len = max(max_len, curr_len);
                curr_len = 0;
            }
 
            else {
                curr_len++;
            }
 
        }
 
        if(curr_len > 0){
            max_len = max(max_len, curr_len);
        }
        cout << max_len << "
";
    }
}