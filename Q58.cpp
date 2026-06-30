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
    int a = arr[0];
    for(int i= 0; i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=a;
    cout << "Left Rotated Array - ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
