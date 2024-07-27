#include<iostream>
#include<string>
using namespace std;
struct info
{
    string name;
    int age;
};
int main(){
    info person[3]={
        {"Arslan",20},{"Ali",18},{"Usman",12}
    };
    for(int i=0;i<3;i++)
    {
        cout<<person[i].name<<" "<<person[i].age<<" ";
        cout<<endl;
    }
return 0;
}