#include <iostream>
using namespace std;
void prime(int x){
    int flag =0 ;
    for(int i=2;i<x;i++){
        if(x%i==0){
            flag =1 ;
            break;
        }
    }
    if(flag==1) cout << "NOT PRIME NUMBER !";
    else cout << "PRIME NUMBER ";
}

int main(){
    int x,y;
    cout <<"Enter first number : ";
    cin >> x;
    
    prime(x);
}


