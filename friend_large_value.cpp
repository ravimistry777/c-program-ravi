#include <iostream>
using namespace std;

class MyClass {
private:
    int a, b;
    
public:
    MyClass(int x, int y) : a(x), b(y) {}

    friend int findLargest(MyClass obj);
};

int findLargest(MyClass obj) {
    return (obj.a > obj.b) ? obj.a : obj.b;
}

int main() {
    MyClass obj(10, 20);
    cout << "Largest value: " << findLargest(obj) << endl; 
    return 0;
}

