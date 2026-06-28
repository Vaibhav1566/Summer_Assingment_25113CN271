#include <iostream>
using namespace std;
void sum(int x , int y){
    int sum = x+y;
    cout << "Sum of Two Number = "<< sum;
}

int main(){
    int x,y;
    cout <<"Enter first number : ";
    cin >> x;
    cout <<"Enter second number : ";
    cin >> y;
    sum(x,y);
}


