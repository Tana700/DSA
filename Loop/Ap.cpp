#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number ";
    int n;
    cin>>n;
    for(int i = 1; i <= 2*n-1;i+=2){
        cout<<i<<" ";
    }
}