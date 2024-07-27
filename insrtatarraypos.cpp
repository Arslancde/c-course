#include<iostream>
using namespace std;
int main(){
    int size=5;
    int array[size]={1,2,3,4,5};
    int ele=10;
    int pos;
    cout<<"enter pos for elemnt to be insert "<<endl;
    cin>>pos;
    int newarray[size+1];
    for(int i=0;i<pos;i++)
    {
        newarray[i]=array[i];
    }
    newarray[pos]=ele;
    for(int i=pos;i<size;i++)
    {
        newarray[i+1]=array[i];
    }
    for(int i=0;i<size + 1;i++)
    {
        cout<<newarray[i]<<" ";
    }
return 0;
}