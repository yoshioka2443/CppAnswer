#include <iostream>
#include <string>
#include "scoreboard.h"

void ArrowTest(ScoreBoard *p){
    // (*p).Print();
    p->Print();
}

int main(){
    ScoreBoard board = {"Tatsuya", 35, 100, 89};
    ArrowTest(&board);
    std::cout << "aaaaaa";
    return 0;
}