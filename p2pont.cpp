//pointer to pointer
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *b=&a;
    cout<<"address of a is "<<&b<<endl;
    int **c=&b;
    cout<<"address is "<<c<<endl;
return 0;
}