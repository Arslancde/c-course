#include<iostream>
using namespace std;
int square(int a)
{
    int a;
    int result=a * a;
    return result;
}
int main(){ 
    int num;
    cout<<"enter number for square "<<endl;
    cin>>num;
    cout << "Square: " << square(num) << endl;
return 0;
}