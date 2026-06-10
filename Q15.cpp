
#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter number to check Armstrong or not = ";
    cin >> n;

    int d = 0, a = n, b = n, sum = 0;
    while(n > 0){
        n = n / 10;
        d++;
    }

    while(a > 0){
        int r = a % 10;
        int m = 1;
        for(int i = 1; i <= d; i++){
            m = m * r;
        }
        sum = sum + m;
        a = a / 10;
    }

    if(b == sum) cout <<"Armstrong Number";
    else cout << "Not an Armstrong";
}
