#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p = &x;
    int *p2 = &y;
    cout<<"Enter first number : ";
    cin>>*p;
    cout<<"Enter second number : ";
    cin >>*p2;
    cout<<x+ y;
}