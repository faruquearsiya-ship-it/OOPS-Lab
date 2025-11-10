#include<iostream>
using namespace std;
class Employee{
    public:
    int empID;
    string name;
    float salary;
    void setEmployee(int id,string n,float s){
        empID =id;
        name=n;
        salary=s;
    }
    void displayEmployee(){
    cout<<"employee ID:"<<empID<<",Name:"<<name<<",salary:Rs."<<salary<<endl;
    }
};
int main(){
    Employee e1,e2;
    e1.setEmployee(101,"ravi",50000.75);
    e2.setEmployee(102,"priya",62000.50);
    e1.displayEmployee();
    e2.displayEmployee();
    return 0;
}
