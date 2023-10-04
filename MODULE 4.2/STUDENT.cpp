#include<iostream>
using namespace std;


class Student {
public:
    int rollNumber;

    void inputRollNumber() {
        cout << "ENTER YOUR STUDENT ROLL NUMBER: ";
        cin >> rollNumber;
    }
};


class Test : public Student {
public:
    float subject1, subject2;

    void inputMarks() {
        cout << "ENTER THE MARK OBTAINED IN SUBJECT 1: ";
        cin >> subject1;
        cout << "ENTER THE MARK OBTAINED IN SUBJECT 2: ";
        cin >> subject2;
    }
};


class Result : public Test {
public:
    float totalMarks;

    void calculateTotalMarks() {
        totalMarks = subject1 + subject2;
    }

    void displayResult() {
        cout << "ROLL NUMBER: " << rollNumber << endl;
        cout << "MARK IN SUBJECT 1: " << subject1 << endl;
        cout << "MARK IN SUBJECT 2: " << subject2 << endl;
        cout << "TOTAL MARK: " << totalMarks << endl;
    }
};

int main() {
   
    Result studentResult;

    studentResult.inputRollNumber();
    studentResult.inputMarks();
    studentResult.calculateTotalMarks();
    studentResult.displayResult();

    return 0;
}