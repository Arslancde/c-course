#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    //this will print the address of array
    cout<<arr<<endl;
    //this will print  all elements of array
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        cout<<arr[i]; 
    }
return 0;
}