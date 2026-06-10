#include <iostream>
using namespace std ;
int main(){
    int x ,y;
    cout << "Enter first number - ";
    cin >> x;
    cout << "Enter 2nd number - ";
    cin >> y ;
    int a=1;
    for (int i=min(x,y) ; i >=1 ; i++){
        if(x%i==0 && y%i==0){
            a=i;
        }
    }
    cout << "GCD = " << a;
}