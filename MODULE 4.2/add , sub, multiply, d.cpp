#include<iostream>
using namespace std;

class Arithmetic {
    int a, b;

public:
    
    Arithmetic(int a, int b) 
	{
        this->a = a;
        this->b = b;
    }

    
    void add() 
	{
        cout << "Addition of " << a << " and " << b << " is: " << a + b << endl;
    }

    
    void subtract()
    {
        cout << "Subtraction of " << a << " and " << b << " is: " << a - b << endl;
    }

    
    void multiply() 
	{
        cout << "Multiplication of " << a << " and " << b << " is: " << a * b << endl;
    }

    
    void divide()
	 {
        if(b != 0)
            cout << "Division of " << a << " by " << b << " is: " << (float)a / b << endl;
        else
            cout << "Division by zero is not defined." << endl;
    }
};

int main() 
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    
    Arithmetic arith(num1, num2);

    .add();
    .subtract();
    .multiply();
    .divide();

    return 0;
}