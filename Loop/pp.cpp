#include<iostream>
using namespace std;
int main(){
    int a , b;
    char op;
    cout<<"Enter the number\n";
    cin>>a>>op>>b;
   
        if(op == '-'){
            cout<<a-b;
            if(op == '*'){
                cout<<a*b;
                if(op == '/'){
                    cout<<a/b;
                }else{
                    cout<<"invalid";
                }
            }
        }
    }

    
