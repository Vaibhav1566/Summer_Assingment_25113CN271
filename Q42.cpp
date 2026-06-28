#include <iostream>
using namespace std;
void max(int x , int y){
    if(x>y) cout<< "MAX NUM = "<< x;
    else cout<< "MAX NUM = "<< y;
}

int main(){
    int x,y;
    cout <<"Enter first number : ";
    cin >> x;
    cout <<"Enter second number : ";
    cin >> y;
    max(x,y);
}


