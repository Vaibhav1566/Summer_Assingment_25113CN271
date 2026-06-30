#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Number of Element- ";
    cin >> n;
    int arr[n];
    cout <<"Enter Array - ";
    for(int i=0; i<n;i++){
        cin>> arr[i];
    }
    int a = arr[n-1];
    for(int i=n-1 ; i>0 ; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=a;
    cout << "Right Rotated Array - ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
