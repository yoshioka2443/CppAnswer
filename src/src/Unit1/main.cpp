#include <iostream>
#include <vector>
int main()
{
    std::vector<int> scores;
    int num;
    std::cout << "数字を入力してください\n";
    std::cin >> num;

    for (int i = 0; i  < num; i++) {
        scores.push_back(3 * i);
    }

    int* p;
    p = &scores[0];
    std::cout << p << "\n";
    std::cout << *p << "\n";
    // std::cout << "Hello World\n";

    // std::cout << 2020 + 1 << "\n";
    // std::cout << 2020 - 1 << "\n";
    // std::cout << 2020 * 2 << "\n";
    // std::cout << 2020 / 5 << "\n";

    // std::cout << (2020 + 5) / 5 << "\n";

    // std::cout << (2020 + 5) / 10 << "\n";
    // std::cout << (2020 + 5) / 10.0 << "\n";

    // std::cout << (2020 + 5) % 3 << "\n";
    // std::cout << (2020 + 6) % 3 << "\n";
    // std::cout << (2020 + 7) % 3 << "\n";
    // std::cout << (2020 + 8) % 3 << "\n";



    return 0;
}