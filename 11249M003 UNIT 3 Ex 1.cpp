#include<iostream>
using namespace std;
class fruit{
    private:
    string name;
    float weight;
    public:
    void setdata(string n,float w){
        name = n;
        weight = w;
    }
    friend void display(fruit f);
};
void display(fruit f)
{
    cout<<"fruit name:"<<f.name<<endl;
    cout<<"fruit weight:"<<f.weight<<"kg"<<endl;
}
int main(){
    fruit apple;
    apple.setdata("apple",1.2);
    display(apple);
    return 0;
}
