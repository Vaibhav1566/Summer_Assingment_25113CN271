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
    int tsum = n*(n+1)/2;
    int asum=0;
    int i=0;
    while(i<n){
        asum+=arr[i];
        i++;
    }
    int a=(tsum - asum);
    cout << tsum << endl ;
    cout << asum << endl ;
    cout << "Missing Number = " << a ;
}
