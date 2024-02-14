#include <iostream>

int main(){
    // double scores[3];
    // scores[0] = 1.4;
    // scores[1] = 8.2;
    // scores[2] = 3.5;
    double scores[3] = {1.4, 8.2, 3.5};
    for (int i = 0; i < 3; i++){
        std::cout << i << " > " << scores[i] << "\n";
    }


    //why constexpr
    return 0;
}