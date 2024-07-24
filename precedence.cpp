#include<iostream>
using namespace std;
int main(){
    int price;
    int quantity;
    int discount;
    int tax;
    int total;
    cout<<"enter the price of item "<<endl;
    cin>>price;
    cout<<"enter the quantity "<<endl;
    cin>>quantity;
    cout<<"enter the discount "<<endl;
    cin>>discount;
    cout<<"enter tax "<<endl;
    cin>>tax;
    total=price * quantity - discount + tax;
    cout<<"total is "<<total<<endl;
return 0;
}