// HCF(a,b) X LCM(a,b) = a*b
// ==>> LCM(a,b) = a*b /HCF(a,b)


#include <iostream>
using namespace std ;
int main(){
    int x ,y;
    cout << "Enter first number - ";
    cin >> x;
    cout << "Enter 2nd number - ";
    cin >> y ;
    int gcd=1;
    for (int i=min(x,y) ; i >=1 ; i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    cout << "LCM = "<< (x*y)/gcd;
}