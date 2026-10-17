#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    cout<<"Enter third number ";
    cin>>c;

    if(a > b){
        if(a > c){
            cout<<a<<" "<<" Is the greatest";
        }else{
           cout<<c<<"Is the greatest";
        }
    }else{
      if(b>c){
        cout<<b<<" Is the greatest";
      }else{
        cout<<c<<" Is the greatest";
      }
    
    }
}
