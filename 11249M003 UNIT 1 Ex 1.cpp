#include<iostream>
using namespace std;
class Laptop{
    public:
    string brand;
    string processor;
    int ram;
    void display(){
        cout<<"brand:"<<brand<<",proccesor:"<<processor<<",Ram:"<<ram<<"Gb"<<endl;
        }
};
int main(){
    Laptop l1,l2;
    l1.brand ="dell";
    l1.processor="intel i5";
    l1.ram=8;
    l2.brand="hp";
    l2.processor="AMD Ryzen 5";
    l2.ram=16;
    l1.display();
    l2.display();
    return 0;

}
