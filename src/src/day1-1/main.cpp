#include <iostream>

int main(){
    for (int i = 1; i < 100; i++){
        for (int j = 1; j < 100; j++) {
            if (12 * (i + 4) - (2 - 7 * j) == 548){
                std::cout << "(" << i << "," << j << ")\n";
                printf("(%d,%d)\n", i, j);
            }
        }
    }
    return 0;
}