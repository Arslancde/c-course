#include<iostream>
using namespace std;
    struct employee
    {
        int eid;
        int favchar;
        int salary;
    };
    int main()
    { 
        struct employee arslan;
        arslan.eid=199;
        arslan.favchar='a';
        arslan.salary=20000;
        cout<<arslan.eid<<endl;
        cout<<arslan.favchar<<endl;
        cout<<arslan.salary<<endl;
        return 0;
    }