#include <iostream> 
using namespace std;
int main(){
    int num ;
    cout << "Enter a number = ";
    cin >> num ;
    int i , sum=0 , digit ;
    while (num >0){
        digit = num %10;
        sum+=digit ;
        num/=10;
    }
    cout << "Sum of digits of number = "<< sum ;

}