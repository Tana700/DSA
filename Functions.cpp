// #include<iostream>
// using namespace std;

// void greeting(){
//  cout<<"Hello world"<<endl;
//  cout<<"How are you";
// }
// int main(){
// greeting();
// greeting();
// greeting();
// greeting();
// greeting();
// greeting();
// }


//Triangle
// #include<iostream>
// using namespace std;
// void StarTriangle(int x){
// for(int i = 1; i<=x; i++){
//     for(int j =1 ;j <= i; j++){
//        cout<<"*";
//     }
//     cout<<endl;
// }
// }
// int main (){
//     StarTriangle(3);
//     StarTriangle(4);
//     StarTriangle(5);
// }

#include<iostream>
using namespace std;
int main (){
int num;
cin>>num;

prints();
return 0;
}
void prints(int num = 5){
    for(int i = 1; i <= num; i++){
        cout<<i<<" ";
    }
    return;
}