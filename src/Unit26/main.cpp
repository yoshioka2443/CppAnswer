#include <iostream>
#include <string>

struct ScoreBoard {
    std::string name;
    int japanese;
    int math;
    int english;
};

int main(){
    ScoreBoard board = {"Tatsuya", 35, 100, 89};
    std::cout << board.name << "\n";
    std::cout << board.japanese << "\t";
    std::cout << board.math << "\t";
    std::cout << board.english << "\n";
    return 0;
}