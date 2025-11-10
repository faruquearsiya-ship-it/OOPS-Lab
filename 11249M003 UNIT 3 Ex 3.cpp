#include <iostream>
using namespace std;
class Array {
    int a[5];
public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> a[i];
        }
    }
    void operator ++() {
        for (int i = 0; i < 5; i++) {
            a[i]++;
        }
    }
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < 5; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Array arr;
    cout << "--- Input Array ---" << endl;
    arr.input();
    cout << "\n--- Original Array ---" << endl;
    arr.display();
    ++arr;
    cout << "\n--- After Applying Unary ++ Operator ---" << endl;
    arr.display();
    return 0;
}
