
#include <iostream>
using namespace std ;
int main(){
    int start , end ;
    cout << "Enter starting number = ";
    cin >> start;
    cout << "Enter ending number = ";
    cin >> end;
    cout <<"Armstrong Number = ";
for(int j=start ; j<=end ;j++){

    int temp=j;
    int d = 0, a =j , b = j, sum = 0;

    while(temp > 0){
        temp = temp / 10;
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

    if(b == sum) cout <<b << " , ";
    
}
}
