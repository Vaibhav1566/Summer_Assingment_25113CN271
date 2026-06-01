#include <iostream>
using namespace std ;
int main(){
    int num ; 
    cout<< "Enter a number = ";
    cin >> num ;
    int r , pro=1, a=num;
    while (num>0){
        r = num%10;
        pro*=r;
        num/=10;
    }
    cout << "Products of digits of "<< a << " = "<< pro;
}