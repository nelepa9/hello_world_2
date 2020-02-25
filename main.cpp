#include <iostream>

class A{
    int a;
    int b;
public:
    A(int i, int i1) {

    }
};

class B{
    int a;
    int b;
public:
    B(int i, int i1) {

    }
};

int main() {

    A ab = {1, 2};

    B abb = {1, 2};

    std::cout << "Hello, World!" << std::endl;

    return 0;
}