#include<iostream>
using namespace std;
void readarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int min(int arr[],int n)
{
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int maxvalue(int arr[],int n)
{
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int reverse(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    readarray(arr,n);
    int mn=min(arr,n);
    cout<<"The minimum array element is "<<mn<<" "<<endl;
    int mx=maxvalue(arr,n);
    cout<<"The maximum array element is "<<mx<<" "<<endl;
    reverse(arr,n); 
return 0;
}