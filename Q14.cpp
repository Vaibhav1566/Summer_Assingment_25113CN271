#include <iostream>
using namespace std;
int main(){
    int n ; 
    cout << "Enter the nth Febonnaci term - ";
    cin >> n ;
    int a=0 , b=1 , sum , i;
    for(i=1 ; i<=n-2;i++){
        sum = a+b;
        a=b ;
        b=sum ;
    }
    cout << n <<"th term of febonnaci series = " << b;
}