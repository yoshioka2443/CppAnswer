#include <iostream>
#include <fstream>

int main(){
    std::ofstream file;
    file.open("src/Unit25/test.txt", std::ios::app);
    file << "hello" << std::endl;
    file.close();
    
    return 0;
}