#include <iostream>
using namespace std;
int main(){
    int num ;
    int i , sum=0 ;
    cout<< "Enter a number ";
    cin>> num ;
    for (i=1 ; i<=num ;i++){
        sum+=i;
    }
    cout << "Sum of first "<< num << " natural numbers = " << sum;
    

}