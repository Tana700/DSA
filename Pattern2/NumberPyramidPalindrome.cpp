#include<iostream>
using namespace std;
int main (){
    cout<<"Enter number ";
    int n;
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    for(int i = 1; i <= n ; i++){ //rows
        for(int j = 1; j <= nsp;j++){//Spaces
           cout<<"  ";
        }
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j =i-1;j >= 1;j-- ){
           cout<<j<<" ";
        }
        nsp --;
        nst +=2;
        cout<<endl;
    }
}
