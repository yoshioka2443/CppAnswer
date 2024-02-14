#include <iostream>
#include <array>

void print_array(int *arr_input, int arr_size){
    for (int i = 0; i < arr_size; ++i){
        std::cout << arr_input[i] << "\n";
    }
}


int main(){
    int arr[3] = {2, 3, 5};
    std::cout << arr << "\n";
    std::cout << &arr[0] << "\n";
    print_array(arr, 3);
    int arr2[4] = {20, 30, 50, 80};
    print_array(arr2, 4);

    return 0;
}