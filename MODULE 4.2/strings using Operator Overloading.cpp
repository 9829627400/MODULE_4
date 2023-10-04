#include<iostream>

using namespace std;

class String {
public:
    string str;

  
    String(string s) {
        str = s;
    }

  
    String operator+(String s) {
        return String(str + s.str);
    }

    
    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello"), s2(" World"), s3("");

    s3 = s1 + s2;

    cout << "After concatenation," << endl;
    s3.display();

    return 0;
}