#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of students : ";
cin >>n;
int marks[5];
  //input
      cout<<"enter the marks : ";
  for(int i = 0; i <= n-1;i++){

    cin>>marks[i];
  }
  //output
  for(int i = 0;i <= n-1;i++){
    if(marks[i] < 35)
    cout<<i<<" ";
  }
}