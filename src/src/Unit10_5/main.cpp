#include <iostream>
#include <array>
constexpr int RowSize = 3;
constexpr int ColumnSize = 4;

int main(){
    std::array<std::array<int, ColumnSize>, RowSize> matrix;
    int matrix[RowSize][ColumnSize];

    int count = 0;
    for (int i = 0; i < RowSize; ++i) {
        for (int j = 0; j < ColumnSize; ++j) {
            matrix[i][j] = count;
            count++;
        }
    }
    for (int i = 0; i < RowSize; ++i) {
        for (int j = 0; j < ColumnSize; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}