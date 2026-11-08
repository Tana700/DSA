#include<iostream>
using namespace std;
int x = 0;
int main()
{
int x = 10;//local main
cout<<x<<endl;
}
void staff(){
    int x = 100; //local to do_staff
    cout<<x<<endl;
   
}
