#include<iostream>
using namespace std;
void Startringle(int x){
  for(int i = 1;i <= x;i++){
    for(int j = 1; j <= i;j++){
        cout<<"*";
    }
    cout<<endl;
  }
}
int main(){
    Startringle(3);
    Startringle(4);
    Startringle(5);
}

//0774513888   evelyn tambarare