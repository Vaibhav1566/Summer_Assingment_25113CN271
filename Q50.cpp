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
    int sum=0 , avg;
    for(int i=0 ; i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;
}