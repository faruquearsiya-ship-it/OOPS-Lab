#include <iostream>
using namespace std;
class sample{
private:
    int a,b;
public:
    void setData(int x, int y){
        a=x;
        b=y;
    }
    friend void displaySum(sample s);
};
void displaySum(sample s){
    cout<<"sum of a and b = " <<s.a+s.b<< endl;
}
int main() {
    sample obj;
    obj.setData(70, 30);
    displaySum(obj);
    return 0;
}
