#include <iostream>
#include <array>

void print_array(int *arr_input, int arr_size){
    for (int i = 0; i < arr_size; ++i){
        std::cout << arr_input[i] << "\n";
    }
}

void multiply_array(int*arr_input, int *arr_output, int multiplier, int arr_size){
    for (int i = 0; i < arr_size; ++i){
        arr_output[i] = arr_input[i] * multiplier;
    }
}

int main(){
    int arr[3] = {2, 3, 5};
    print_array(arr, 3);
    int arr2[3];
    multiply_array(arr, arr2, 10, 3);
    print_array(arr2, 3);

    return 0;
}