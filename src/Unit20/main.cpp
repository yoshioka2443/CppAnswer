#include <iostream>

int main(){
    // int *num = new int; // stack
    int *num; // new int -> heap 
    *num = 3;

    std::cout << *num << "\n";
    std::cout << num << "\n";
    delete num;
    return 0;
}