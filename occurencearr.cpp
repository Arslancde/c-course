#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,2,3,3,4,3,3};
    int total=0;
    int count=2;
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<endl;
        if(arr[i]==count)
        {
            total++;
        }
    }
    cout<<"element occur "<<total<<"times";
return 0;
}