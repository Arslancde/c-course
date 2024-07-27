#include<iostream>
using namespace std;
int main(){
    int size=5;
    int oldarray[size]={1,2,3,4,5};
    int ele=10;
    int newarray[size+1];
    newarray[0]=ele;
    for(int i=0;i<size;i++)
    {
        newarray[i+1]=oldarray[i];
    }
    for (int i = 0; i < size+1; i++)
    {
        cout<<newarray[i]<<" ";
    }
    
return 0;
}