#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        cout<<arr[i];
    }
return 0;
}