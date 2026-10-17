#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number ";
    int n,lastdigit;
    cin>>n;
    int rev = 0;
    while(n != 0){
    rev *=10;
    lastdigit = n % 10;
    rev += lastdigit;
    n /= 10;
    }
    cout<<rev;
}