// Reverse Star pyramid

#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter number of Row =";
    cin >> n;
    int nsp=1;
    int nst=n;

    for(int i=1 ; i<=n; i++){
        for(int j=nsp ; j>=1; j--){
            cout << " ";
        }
        nsp++;
        for(int k=2*nst-1 ; k>=1 ; k--){
            cout << "*" ;
        }
        nst--;
        cout << endl;
    }
    
}
