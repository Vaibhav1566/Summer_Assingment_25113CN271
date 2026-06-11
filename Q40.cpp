// Repeated Character Pyramid 

#include <iostream>
using namespace std ;
int main(){
    int n ; 
    cout << "Enter the number of Row = ";
    cin >> n;

    for(int i=1 ; i<=n; i++){
        for(int j=1 ; j<=n-i;j++){
            cout << " ";
        }

        for(int k=65 ;k<i+65;k++){
            cout << (char)k;
        }

        for(int l=64+i-1;l>=65;l--){
            cout << (char)l;
        }
        cout << endl;
    }
}
