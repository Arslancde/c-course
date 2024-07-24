#include<iostream>
using namespace std;
int main(){
    int arr[]={12, 5, 787, 1, 23, 45, 88, 23, 65};
    int first=arr[0],second=arr[0],third=arr[0];
    for(int i=0;i<10;i++)
    {
        if(arr[i]>first)
        {
            first=arr[i];
        }else if(arr[i]>first && arr[i]>third)
        {
            second=arr[i];
        }else if(arr[i]>first && arr[i]>second)
        {
            third=arr[i];
        }
    }
     cout << "The largest three elements are: " << first << ", " << second << ", " << third << endl;
return 0;
}