#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number : ";
    int n;
    cin >>n;
    //2n-1
    for(int i =1;i <= 2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    int m = n-1; // new lines
    int nsp = 1;
    for(int i = 1;i <= m;i++){
        //stars
        for(int j = 1; j<= m+1-i;j++){
            cout<<"* ";
        }
        //spaces
        for(int j = 1;j <= nsp;j++){
            cout<<"  ";
        }
       //stars
        nsp +=2;
        for(int j= 1;j <= m+1-i;j++){
            cout<<"* ";
        }
       cout<<endl;  
    }
}