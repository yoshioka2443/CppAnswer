#include <iostream>

void println(int num) {
    std::cout << "INT: " << num << "\n";
}

void println(double num) {
    std::cout << "DOUBLE: " << num << "\n";
}

int main(){
    println(5);
    println(2.0);
    return 0;
}