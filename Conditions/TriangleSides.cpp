#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a ";
    cin>> a;
    cout<<"Enter b ";
    cin>>b;
    cout<<"Enter c ";
    cin>>c;
    if ((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<a<<","<<b<<","<<c<<"Can be sides of a triangle";
    }else{
        cout<<"Invalid triangle";
    }
    
}