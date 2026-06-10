#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number = ";
    cin >> n ;
    int i ,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n) cout <<"Perfect Number ";
    else cout << "Not a Perfect Number ";
}