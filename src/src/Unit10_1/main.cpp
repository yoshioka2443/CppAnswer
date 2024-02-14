#include <iostream>
#include <vector>
int main()
{
    std::vector<int> scores;
    int num;
    std::cout << "数字を入力してください\n";
    std::cin >> num;

    for (int i = 0; i  < num; i++) {
        scores.push_back(i);
        std::cout << scores[i] << "\n";
        // std::cout << sizeof(scores[i]) << "\n";
        std::cout << &scores[0] << "\n";
    }

    // int* p;
    // p = &scores[0];
    // std::cout << p << "\n";
    // std::cout << *p << "\n";
    return 0;
}