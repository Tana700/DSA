//This program demostrate function with a parameter 
#include<iostream>
using namespace std;
//Fuction proto type
void displayValue(int);

int main ()
{
cout<<"I am passing 5 to display value.\n";
displayValue(5);
cout<<"Now i am back main function.\n";
return 0;
}
//Defination of function displayValue.
//it uses an integer parameter whose value is displayed 

void displayValue(int num)
{
    cout<<"The value is "<< num <<endl;
}