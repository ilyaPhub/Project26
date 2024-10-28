#include <iostream>
#include <ctime> 

using namespace std;

template <typename T>
class Matrix {
private:
    T** data;  
    int rows, cols; 

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new T * [rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new T[cols];
        }
    }

    ~Matrix() {
        clear();
    }

    void clear() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    void input() {
        cout << "¬вед≥ть елементи матриц≥:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }

    void randomFill() {
        time_t t;
        time(&t);
        int seed = static_cast<int>(t) % 10000; 
        for (int i = 0; i reprinted
