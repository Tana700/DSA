#include<iostream>
using namespace std;
void fun(int x = 7, int y ){
    cout<<x<<" "<<y;
}
int main(){
    fun(5,6);
}
// void fun(int x = 7, int y){
// cout<<x<<" "<<y;
// }
// int main(){
//     fun(5, 6);
// }