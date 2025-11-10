#include <iostream>
using namespace std;
class Array {
    int arr[5];
public:
    Array() {
        for (int i = 0; i < 5; i++)
            arr[i] = i + 1;
    }
    int& operator[](int index) {
        return arr[index];
    }
};

int main() {
    Array a;
    cout << "Original values:\n";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    a[2] = 100;
    cout << "After modification:\n";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

