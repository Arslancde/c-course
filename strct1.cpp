#include<iostream>
using namespace std;
 struct employee
 {
    int eid;
    char favchar;
    float salary;
 };
 int main()
 {
    struct employee Arslan;
    Arslan.eid=330;
    Arslan.favchar='A';
    Arslan.salary=50000;
    cout<<"eid of Arslan is "<<Arslan.eid<<endl;
    cout<<"eid of Arslan is "<<Arslan.favchar<<endl;
    cout<<"eid of Arslan is "<<Arslan.salary<<endl;
return 0;
}