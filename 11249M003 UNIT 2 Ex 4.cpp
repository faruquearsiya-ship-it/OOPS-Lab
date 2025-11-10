#include<iostream>
using namespace std;
class car{
    private:
    string brand;
    int price;
    public:
    car(){
        brand="unknown";
        price =0;
        cout<<"default constructer called:car object created"<<endl;
    }
    void display(){
        cout<<"Brand"<<brand<<"Price"<<price<<endl;
    }
};
int main(){
    car c1;
    c1.display();
    return 0;
}
