// Repeated Character Pattern

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of Row = ";
    cin>> n;
    int a=65;
    for(int i=1; i<=n;i++){
        for (int j= 1;j<=i;j++){
            cout <<(char)a;
        } 
        a++;
        cout << endl;
    }
}