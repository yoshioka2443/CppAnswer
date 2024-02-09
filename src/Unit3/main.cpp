#include <iostream>

int main(){
    // int num;
    // std::cout << "数値を入力してください\n";
    // std::cin >> num;
    // std::cout << num << "\n";

    //bmi
    double height, weight;
    double bmi;

    std::cout << "身長[cm]を入力してください\n";
    std::cin >> height;
    height /= 100;

    std::cout << "体重[kg]を入力してください\n";
    std::cin >> weight;

    bmi = weight / (height*height);
    std::cout << "bmiは" << bmi << "です\n";
    return 0;
}