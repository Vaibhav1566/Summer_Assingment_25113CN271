#include <iostream>
using namespace std;
int main(){
    int num ;
    int i, digits=0;
    cout << "enter a number = ";
    cin >> num ;
    while (num!=0){
        num=num/10;
        digits++;
    }
    cout << "Number of digits = "<< digits;
}