#include <iostream>
using namespace std;
void factorial(int x){
    int fact=1 ;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    cout << "factorial = "<< fact;
    
}

int main(){
    int x,y;
    cout <<"Enter first number : ";
    cin >> x;
    
    factorial(x);
}


