#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &it: arr){
            cin >> it;
        }
        int max = 0;
        int sec_max = 0;
        for(int j = 0;j<n;j++){
            
            if (arr[j] >= max){
                sec_max = max;
                max = arr[j];
            }else if(arr[j]<max && arr[j]>sec_max){
                sec_max = arr[j];
            }
            
        }
        // cout<<max<<" "<<sec_max<<"gg";
        
        for(int k = 0;k <n;k++ ){
 
            
            if (arr[k] == max){
                cout << max - sec_max << " ";
            }
            else{
               cout << arr[k] - max << " ";
            }
            
            
            
        }
        cout << "
";
    }
}