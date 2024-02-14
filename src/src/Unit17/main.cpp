#include <iostream>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    std::cout << "aの値は" << a << "\n";
    std::cout << "bの値は" << b << "\n";
    std::cout << "aのアドレスは" << &a << "\n";
    std::cout << "bのアドレスは" << &b << "\n";
}

int main(){
    int x = 3, y = 5;
    std::cout << "xの(元の)値は" << x << "\n";
    std::cout << "yの(元の)値は" << y << "\n";
    std::cout << "xのアドレスは" << &x << "\n";
    std::cout << "yのアドレスは" << &y << "\n";
    swap(&x, &y);
    std::cout << "xの値は" << x << "\n";
    std::cout << "yの値は" << y << "\n";
    std::cout << "xのアドレスは" << &x << "\n";
    std::cout << "yのアドレスは" << &y << "\n";
    return 0;
}