#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    cout << "the arr elements are as follow " << *ptr << endl;
    cout << "the arr elements are as follow " << *(ptr + 1) << endl;
    cout << "the arr elements are as follow " << *(ptr + 2) << endl;
    cout << "the arr elements are as follow " << *(ptr + 3) << endl;
    cout << "the arr elements are as follow " << *(ptr + 4) << endl;
    //now we are trying to print all elements using for loop
    for(int i=0;i<5;i++)
    {
        cout<<"the values of array are "<<*ptr<<" "<<endl;
        ptr++;
    }
    //now printing address
        for(int i=0;i<5;i++)
    {
        cout<<"following is the address of all elements of array "<<&ptr<<" "<<endl;
        ptr++;
    }
    //now printing value using addrees operator &
    cout<<"here is the value at given address "<<endl;
    ptr=&arr[4];
    cout<<"ptr address at arr[4] is as "<<endl<<ptr;
    return 0;
}