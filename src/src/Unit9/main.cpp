#include <iostream>
#include <array>

constexpr int ScoreSize = 5;

int main(){
    std::array<double, ScoreSize> scores = {1.4, 8.2, 3.5, 2.4, 9.1,};
    for (int i = 0; i < ScoreSize; i++) {
        std::cout << scores[i] << "\n";
    }

    for (auto item : scores) {
        std::cout << item << "\n";
    }

    return 0;
}