#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of Elements -";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Array - ";
    for(int i=0; i<n;i++){
        cout << arr[i]<< " , ";
    }
}