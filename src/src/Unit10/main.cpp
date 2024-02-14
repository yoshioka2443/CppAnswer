#include <iostream>


int main(){
    std::vector<int> scores;
    int num;
    std::cout << "数字を入力してください\n";
    std::cin >> num;

    for (int i = 0; i  < num; i++) {
        scores.push_back(3 * i);
    }

    for (int i = 0; i < scores.size(); i++) {
        std::cout << scores[i] << "\n";
    }

    while(true) {
        int value;
        std::cout << "数値を入力してください\n";
        std::cin >> value;
        if (value == -1){
            break;
        }
        scores.push_back(value);
    }
    
    for (int i = 0; i < scores.size(); i++) {
        std::cout << scores[i] << "\n";
    }
    return 0;
}