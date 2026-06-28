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
    int x ;
    cout << "Enter number to search - ";
    cin >> x ;
    int flag=0;
    for(int i=0 ; i<n;i++){
        if(arr[i]==x){
            flag++;
        }
    }
    cout << "Frequency of "<< x << "= "<<flag ;
}

