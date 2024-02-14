#include <iostream>

int factorial(int n){
    return (n == 1) ? n : n * factorial(n - 1);
}

int main(){
    std::cout << factorial(3) << "\n";
    return 0;
}