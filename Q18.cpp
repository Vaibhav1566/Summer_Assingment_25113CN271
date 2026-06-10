#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number = ";
    cin >> n ;
    int i,a=n ,r ,sum=0  ;
    while(n>0){
        r = n%10;
        int fact =1 ;
        for(i=1; i<=r; i++){
            fact= fact*i;
        }
        sum+=fact;
        n = n/10;

    }
    if(a==sum) cout << "Strong Number";
    else cout << "Not a Strong Number";
}