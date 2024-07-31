#include <iostream>
using namespace std;
void readArray(int arr[], int n)
{
    cout << "array elements are " << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}
int findmax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int sumarray(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int big = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Display the predefined array elements
    readArray(arr, n);
    int max = findmax(arr, n);
    cout << "The max element is as " << max<<endl;
    cout<<sumarray(arr,n);
    return 0;
}
