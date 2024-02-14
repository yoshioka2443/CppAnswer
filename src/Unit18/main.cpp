#include <iostream>
#include <array>
constexpr int ArraySize = 3;


int main(){
    std::array<int, ArraySize> arr = {2, 3, 5};
    int arr2[ArraySize] = {2, 3, 5};
    for (int i = 0; i < ArraySize; ++i){
        std::cout << (long)&arr[i] << "\n";
    }
    for (int i = 0; i < ArraySize; ++i){
        std::cout << (long)&arr2[i] << "\n";
    }
    return 0;
}