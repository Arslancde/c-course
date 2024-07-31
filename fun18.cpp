#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int num1;
    cout<<"enter number for factorial "<<endl;
    cin>>num1;
    cout<<"factorial of no is "<<factorial(num1); 
return 0;
}