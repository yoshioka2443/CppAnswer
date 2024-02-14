#include <iostream>
#include <vector>

void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    std::vector<int> vec;
    vec = {4, 2, 5, 6};
    for (int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4; j++){
            if (vec[i] < vec[j]){
                swap(vec[i],vec[j]);
            }
            
        }
    }
    
    for (int i = 0; i < 4; i++){
        std::cout << vec[i] << " ";
    }

    return 0;
}