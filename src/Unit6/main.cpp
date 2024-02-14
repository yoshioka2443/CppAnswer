#include <iostream>

int main(){
    //cast
    int num = 2;
    std::cout << 1 / num << "\n";
    std::cout << 1 / (double)num << "\n";
    std::cout << 1 / static_cast<double>(num) << "\n";
    //scope
    int a = 3;
    {
        int b = 4;
        a = b;
        std::cout << "in scope " << a << "\n";
        std::cout << "in scope " << b << "\n";
    }
    std::cout << "out of scope " << a << "\n";
    // std::cout << "out of scope" << b << "\n";
    return 0;
}