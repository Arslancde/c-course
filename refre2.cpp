#include<iostream>
using namespace std;
int main(){
int x;
int y=2;
int sum;
cout<<"enter a number to print table "<<endl;
cin>>x;
sum= y * x * 20 % x;
x++;
cout<<sum; 
return 0;
}