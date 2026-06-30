#include <iostream>
using namespace std;
int main(){
    int n ; 
    cout << "Enter number of Element - ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
        int a=0;
        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                a = 1;
                break;
            }
        }
        if(count > 1 && a == 0)
            cout << arr[i] << " ";
    }
    
}
