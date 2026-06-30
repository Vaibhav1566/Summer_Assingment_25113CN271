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
    int i =0;
    int j=n-1;
    while(i<=j){
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout << "Reverse Array - ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}