#include <iostream>

class MyClass {
private:
    int x;
    int y;

public:
    MyClass(int a, int b) : x(a), y(b) {}

    // Friend function declaration for operator overloading
    friend int operator-(const MyClass& obj1, const MyClass& obj2);
};

// Friend function definition
int operator-(const MyClass& obj1, const MyClass& obj2) {
    return obj1.x * obj1.y * obj2.x * obj2.y;
}

int main() {
    MyClass obj1(2, 3);  // x=2, y=3
    MyClass obj2(4, 5);  // x=4, y=5

    int product = obj1 - obj2;
    std::cout << "Product of all private elements: " << product << std::endl;  // Should be 2*3*4*5 = 120

    return 0;
}
