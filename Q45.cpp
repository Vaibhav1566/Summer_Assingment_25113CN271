#include <iostream>
using namespace std;
void palindrome(int n){
    int num=n;
    int sum=0;
    while(n>0){
        int r= n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(num==sum) cout << "PALINDROME NUMBER";
    else cout << "NOT A PALINDROME NUM";
}

int main(){
    int n;
    cout <<"Enter first number : ";
    cin >> n;
    
    palindrome(n);
}


