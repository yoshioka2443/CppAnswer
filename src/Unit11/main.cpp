#include <iostream>

int ads(int value) {
    if (value < 0) {
        return -value;
    }else{
        return value;
    }
}

int main(){
    int x = -5;
    std::cout << ads(x) << "\n";
    return 0;
}