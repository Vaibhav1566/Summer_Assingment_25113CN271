#include <iostream>
using namespace std ;
int main(){
    int n ; 
    cout << "Enter a number = ";
    cin>> n;
    int largest =1 ;

    for(int i=2;i<=n;i++){
        while (n%i==0){
            largest =i;
            n=n/i;
        }
    }
    cout << "Largest Prime factor = "<<largest ;
}