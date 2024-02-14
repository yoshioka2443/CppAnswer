#include <iostream>

int main(){
    int x = 3, y = 5;
    int *ptr;
    ptr = &x;
    
    std::cout << " x の値は" << x << " ";
    std::cout << " x のアドレスは" << &x << "\n";
    std::cout << " y の値は" << y << " ";
    std::cout << " y のアドレスは" << &y << "\n";
    std::cout << "ptrの指定先は" << *ptr << " ";
    std::cout << "ptrの値は" << ptr << "\n";
    std::cout << "ptrのアドレスは" << &ptr << "\n\n";
    
    ptr = &y;
    std::cout << " x の値は" << x << " ";
    std::cout << " x のアドレスは" << &x << "\n";
    std::cout << " y の値は" << y << " ";
    std::cout << " y のアドレスは" << &y << "\n";
    std::cout << "ptrの値は" << *ptr << " ";
    std::cout << "ptrのアドレスは" << ptr << "\n\n";

    *ptr = 8;
    std::cout << " x の値は" << x << " ";
    std::cout << " x のアドレスは" << &x << "\n";
    std::cout << " y の値は" << y << " ";
    std::cout << " y のアドレスは" << &y << "\n";
    std::cout << "ptrの値は" << *ptr << " ";
    std::cout << "ptrのアドレスは" << ptr << "\n";

    return 0;
}