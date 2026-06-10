#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout <<"Enter number of terms till which u want Febonnaci series = ";
    cin >> n ;
    int a =0 , b=1 , sum  ,i  ;
    for (i =1 ; i<=n ; i++){
        cout << a << " ";
        sum = a+b;
        a=b ;
        b=sum ;
    }

}