#include <iostream>
using namespace std;
int main(){
    int start , end ; 
    cout << "Enter start number of the range   - ";
    cin >> start ;
    cout << "Enter end number of the range - ";
    cin >> end ;
    int flag = 0;
    for (int i=start ; i<=end ;i++){
        if (i < 2) continue;

        bool isPrime = true;
        for(int j=2 ; j*j<=i ;j++){
            if (i%j==0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            flag = 1;
            cout << i << endl;
        }
    }
    if (flag ==0) cout << "No prime number in given range ";
    else cout << "Above are the prime numbers in the given range ";
}