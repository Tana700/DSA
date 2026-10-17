#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number ";
    int n;
    cin>>n;
    int a = 1;
    for(int i = 1;i<=n;i++){
        cout<<a<<" ";
        a*=2;
    }
}