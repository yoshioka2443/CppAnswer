#include <iostream>

int max(int num1, int num2) {
    std::cout << "int type max function\n";
    if (num1 > num2) {
        return num1;
    }else{
        return num2;
    }
}

int max(int num1, int num2, int num3){
    return max(max(num1, num2), num3);
}

double max(double num1, double num2) {
    std::cout << "double type max function\n";
    if (num1 > num2) {
        return num1;
    }else{
        return num2;
    }
}

int main(){
    std::cout << max(5, 2) << "\n";
    std::cout << max(4.1, 5.1) << "\n";
    std::cout << max(5, 2, 3) << "\n";
    return 0;
}