#include<iostream>
#include<string>
using namespace std;
int main(){
    string str[]={"A","R","S","L","A","N"};
    for(int i=0;i<6;i++)
    {
        cout<<str[i]<<" ";
    }
    //displaying sorted elemnnts of array
    string max=str[0];
    for(int i=0;i<6;i++)
    {
        if(str[0]>max)
        {
            max=str[i];
            
        }
cout<<endl;
    }
    cout<<max;
return 0;
}