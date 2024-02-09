#include <iostream>

int main(){
    bool is_cpp = true;

    if(is_cpp){
        std::cout << "これはC++です\n";
    }else{
        std::cout << "これはC++ではありません\n";
    }

    int case_num = 1;
    switch(case_num){
        case 0:
            std::cout << "0\n";
            break;
        case 1:
            std::cout << "1\n";
            break;
        case 2:
            std::cout << "2\n";
            break;
        default:
            std::cout << "その他\n";
            break;
    }

    return 0;
}