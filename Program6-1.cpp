//This program  has two functions: main  and displayMessage
#include<iostream>
using namespace std;
//******************************************
//Defination of function dispalyMessage    *
//This function displays a greeting.       *
//******************************************

void displayMessage()
{
    cout<<"Hello from the function display. ";
    cout<<endl;
}

//Fuction name
int main(){
    cout<<"Hello from main. \n";
    displayMessage();
    cout<<"Back in function main again.";


}