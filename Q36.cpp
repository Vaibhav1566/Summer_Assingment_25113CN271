// Hollow Rectangle 

#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter number of Row =";
    cin >> n;
    for (int i=1 ; i<=n;i++){
        cout <<"*";
    }
    cout << endl;

    for(int i=2;i<=n-1;i++){
        for(int j=1 ; j<=n ;j++){
            if(j==1 || j==n){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }

    for (int i=1 ; i<=n;i++){
        cout <<"*";
    }

}