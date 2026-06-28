#include <iostream>
using namespace std;
void febonnaci(int n ){
    int a=0, b=1, sum;
    cout << "febonnaci series - " << endl;
    for(int i=0 ; i < n ; i++){
        cout << a << " ";
        sum=a+b;
        a=b ;
        b=sum;
    }

}
int main(){
    int n ; 
    cout << "Enter the nth term of febonacci - ";
    cin >> n;
    febonnaci(n);
}
