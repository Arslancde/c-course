#include<iostream>
#include<string>
using namespace std;
struct book
{
    string title;
    string author;
    float price;
};

int main(){
    book info[3]={{"The Great Gatsby","F. Scott Fitzgerald",10.99},{ "1984","George Orwell",8.99},{"To Kill a Mockingbird","Harper Lee",12.49}};
    for(int i=0;i<3;i++)
    {
        cout<<"Title: "<<info[i].title<<", Author: "<<info[i].author<<", Price: "<<info[i].price;
        cout<<endl;
    }

return 0;
}