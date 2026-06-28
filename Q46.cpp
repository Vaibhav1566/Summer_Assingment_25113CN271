#include <iostream>
using namespace std;
void armstrong(int n){
    int num1=n , num2=n;
    int sum=0;
    int count=0 ;
    while(num1>0){
        count++;
        num1=num1/10;
    }
    while(n>0){
        int r= n%10;
        int m=1;
        for(int i=0; i<count;i++){
            m= m*r;
        }
        sum+=m;
        n=n/10;
    }
    if(num2==sum) cout << "ARMSTRONG NUMBER";
    else cout << "NOT A ARMSTRONG NUM";
}

int main(){
    int n;
    cout <<"Enter number : ";
    cin >> n;
    
    armstrong(n);
}


