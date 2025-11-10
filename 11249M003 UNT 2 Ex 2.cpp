#include<iostream>
using namespace std;
class book{
    string title;
    string author;
    public:
    book(string t,string a){
        title=t;
        author=a;
        cout<<"constructor called:book object created"<<endl;
    }
    void display(){
        cout<<"Book Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
    }
    book(){
        cout<<"destructor called:Book object destroyed"<<endl;
    }
};
int main (){
    book b1("c++ programming","bjaune stroutupe");
    b1.display();
    return 0 ;
}
