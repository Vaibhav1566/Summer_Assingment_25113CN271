#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Number of Element- ";
    cin >> n;
    int a=n;
    int arr[n];
    cout <<"Enter Array - ";
    for(int i=0; i<n;i++){
        cin>> arr[i];
    }
    int j=0;
    for(int i=0; i<n;i++){
            if(arr[i]!=0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
            }
    }
    
    cout << "New Array - ";
    for(int i=0;i<a;i++){
        cout << arr[i] << " ";
    }
}
