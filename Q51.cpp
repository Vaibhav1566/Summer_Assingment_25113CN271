#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter number of element - ";
    cin >> n ;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int s=arr[0];
    int l=arr[0];
    for(int i=0 ; i<n;i++){
        if(arr[i]>l){
            l=arr[i];
        }
        if(arr[i]<s){
            s=arr[i];
        }
    }
    cout << "Largest = " << l<< endl;
    cout << "Smallest = "<< s;
}

