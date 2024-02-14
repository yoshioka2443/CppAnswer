#include <iostream>
#include <fstream>

int main(){
    std::ofstream file;
    file.open("test.txt", std::ios::app);
    file << "hello" << std::endl;
    file.close();
    
    return 0;
}