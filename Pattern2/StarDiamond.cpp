#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number ";
    int n;
    cin >> n;
    int nsp = n-1 ;
    int nst = 1 ;
    //=========UPPER HALF(NORMAL PYRAMID)========
    for(int i =  1 ; i <= n; i++){
        for(int j = 1;j <= nsp;j++){//spaces
           cout<<" ";
        }
        for(int j = 1;j <= nst;j++){
            cout<<"*";
        }
        nsp --;
        nst +=2; 
        cout<<endl; 
    }
    //==========LOWER HALF(INVERTED PYRAMID)=======
    nsp = 1;
    nst = 2*n-3;
    for(int i = 1;i <= n-1;i++){
        for(int j = 1;j <= nsp;j++){
            cout<<" ";
        }
        for(int j = 1;j <= nst;j++){
            cout<<"*";
        }
        nsp ++;
        nst -=2;
        cout<<endl;
    }
}
//1 9 2