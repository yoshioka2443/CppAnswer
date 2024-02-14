#include <iostream>

int main(){
    int num;
    std::cout << "表示する回数を入力してください\n";
    std::cin >> num;

    for (int i = 0; i < num; ++i) {
        std::cout << i << "\n";
    }

    return 0;
}