#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    bool flag = true; //true means prime
    for(int i =2;i <= n-1;i++){
        if(n%i==0){
            flag = false; //composite
            break;
        }
    }
    if(flag == true){
        cout<<n<<" is a prime"<<endl;
    }else
    cout<<n<<" is a composite";
}