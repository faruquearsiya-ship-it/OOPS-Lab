#include<iostream>
using namespace std;
class student{
    string name;
    int marks;
    public:
    void input(){
        cout<<"enter name:";
        cin>>name;
        cout<<"enter marks:";
        cin>>marks;
    }
    void display(){
        cout<<"name:"<<name<<",marks:"<<marks<<endl;
    }
};
int main(){
    int n;
    cout<<"enter number of stidents:";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cout<<"\nenter details for student"<<i+1<<":\n";
        s[i].input();
    }
    cout<<"\ndisplayiong student details:\n";
    for(int i=0;i<n;i++){
        s[i].display();
    }
    return 0;
}
