#include<iostream>
using namespace std;

class Matrix {
    int arr[5];

public:
  
    void input() {
        cout << "Enter elements of the matrix: ";
        for(int i=0; i<5; i++)
            cin >> arr[i];
    }

    Matrix operator+(Matrix m) {
        Matrix temp;
        for(int i=0; i<5; i++)
            temp.arr[i] = this->arr[i] + m.arr[i];
        return temp;
    }

   
    void display() {
        cout << "Matrix: ";
        for(int i=0; i<5; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;

    cout << "For matrix 1," << endl;
    m1.input();

    cout << "For matrix 2," << endl;
    m2.input();

    m3 = m1 + m2;

    cout << "\nAfter addition," << endl;
    m3.display();

    return 0;
}