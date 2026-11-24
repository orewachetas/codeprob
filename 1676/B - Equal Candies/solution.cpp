#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &it: arr){
            cin >> it;
        }
        int min = INT_MAX;
        for(int j = 0; j < n;j++ ){
            if (arr[j] < min){
                min = arr[j];
            }
        }
        int eat = 0;
        for(int k =0; k < n; k++){
            eat += arr[k] - min;
        }
        cout << eat << "
";
    }
}