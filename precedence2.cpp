#include<iostream>
using namespace std;
int main(){
    int x1,x2,y1,y2;
    float sqrt,distance;
    cout<<"enter the value of x1 "<<endl;
    cin>>x1;
    cout<<"enter the value of x2 "<<endl;
    cin>>x2;
    cout<<"enter the value of y1 "<<endl;
    cin>>y1;
    cout<<"enter the value of y2 "<<endl;
    cin>>y2;
    int total=((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout<<"total of no is as "<<total<<endl;
    distance=(total)*0.5;
    cout<<"the distane is given as "<<distance<<endl;
return 0;
}