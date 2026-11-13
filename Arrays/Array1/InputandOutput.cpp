#include<iostream>
using namespace std;
int main(){
    // int arr[7] = {1,5,9,4,6,3,1};
    //  cout<<arr[0]<<" ";
    //  cout<<arr[1]<<" ";
    //  cout<<arr[2]<<" ";
    //  cout<<arr[3]<<" ";
    //  cout<<arr[4]<<" ";
    //  cout<<arr[5]<<" ";
    //  cout<<arr[6]<<" ";

    // for(int i = 0; i <= 6;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[7];

    //Input
    for(int i = 0; i<=6;i++){
        cin>>arr[i];
    }
    //Output
    for(int i = 0; i <= 6;i++){
        cout<<arr[i]<<" ";
    }
}