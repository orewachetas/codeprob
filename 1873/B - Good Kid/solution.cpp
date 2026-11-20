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
        for(auto &it: arr){
            cin >> it;
        }
        int min_num = INT_MAX;
        int count = 0;
        for(int j= 0;j < n;j++){
            if (arr[j] < min_num){
                min_num = arr[j];
                count = j;
            }
        }
 
        arr[count]++;
        int prod = 1;
        for(int k = 0;k < n; k++){
            prod *= arr[k];
        }
        cout << prod << "
";
    }
}