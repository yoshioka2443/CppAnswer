#include <iostream>
#include <fstream>

int main(){
    std::ifstream file;
    file.open("test.txt");
    while(!file.eof()){
        std::string str;
        std::getline(file, str);
        std::cout << str << std::endl;
    }
    return 0;
}