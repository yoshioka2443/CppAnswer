#include <iostream>
#include <string>

int main()
{
    // int num;
    // num = 3;
    // std::cout << num << "\n";

    // num += 5;
    // std::cout << num << "\n";

    //double
    // double x = 3.5;
    // std::cout << x << "\n";

    int num = 3.5;
    std::cout << num << "\n";

    double x = 3;
    std::cout << x << "\n";
    x += 0.5;
    std::cout << x << "\n";

    //type
    std::cout << sizeof(int) << "\n";
    std::cout << sizeof(double) << "\n";

    //string
    std::string words = "Hello World";
    std::cout << words << "\n";
    printf("words = %s \n", words.c_str());

    

    return 0;
}