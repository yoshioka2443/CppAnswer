#include <iostream>

int main()
{
    double rate;
    std::cout << "年利を入力してください\n";
    std::cin >> rate;
    double num = 1;
    double num2 = num * 2;
    int year = 0;
    do {
        year += 1;
        num = num * (1 + (rate/100));
    } while (num < num2);
    printf("倍になるのは%d年です\n", year);
    return 0;
}