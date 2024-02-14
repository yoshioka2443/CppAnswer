#include <iostream>
#include <string>

struct ScoreBoard {
    std::string name;
    int japanese;
    int math;
    int english;

    // 構造体のメンバ変数の値を表示するメンバ関数
    void Print(){
        std::cout << name << "\n";
        std::cout << japanese << "\t";
        std::cout << math << "\t";
        std::cout << english << "\n";
    }

};

int main(){
    ScoreBoard board = {"Tatsuya", 35, 100, 89};
    board.Print();
    return 0;
}