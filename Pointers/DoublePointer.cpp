#include<iostream>
using namespace std;
int main(){
    //pointer address
  int x = 10;
  int *ptr = &x;
  int **ptr2 = &ptr;
  cout<<&x<<endl;
  cout<<ptr<<endl;
  cout<<ptr2<<endl;  

  //Double addresss
//   int x = 10;
//   int *ptr = &x;
//   int **p = &ptr;
//   cout<<&x<<endl;
//   cout<<ptr<<endl;
//   cout<<*p;
}