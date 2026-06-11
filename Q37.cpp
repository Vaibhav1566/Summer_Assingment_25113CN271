// Star pyramid

#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter number of Row =";
    cin >> n;
    int nsp=n-1;

    for(int i=1 ;i<=n;i++){

        for (int k=1 ; k<=nsp;k++){
            cout <<" ";
        }
        nsp--;
        
        for(int j=1 ; j<=(2*i-1) ; j++){
        cout <<"*";
        }
        cout << endl;
    }
}