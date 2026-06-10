#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout <<"Enter a number = ";
    cin >> n;
    int i,flag =0 ;
    for (i=2 ; i<n ; i++){
        if (n%i==0){
            flag = 1 ;
            break ;
        }
    }
    if (flag ==1) cout << "NUMBER IS NOT PRIME !";
    else cout << "PRIME NUMBER!";
}