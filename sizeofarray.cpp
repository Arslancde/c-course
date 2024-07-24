#include<iostream>
using namespace std;
int main(){
    float arr[]={1,6,2,3,4,5,6};
    cout<<sizeof(arr)<<endl;
    //finding array length
    int length=sizeof(arr)/sizeof(int);
    cout<<"length of array is "<<length;
return 0;
}