#include <iostream>
using namespace std ;
int main(){
    int num ;
    cout << "Enter a number = ";
    cin >> num ;
    int r , rev =0 ;
    while (num>0){
        r = num %10;
        rev = rev*10 + r ;
        num/=10;
    }
    cout << "Reverse of " <<num << " = "<< rev;
}