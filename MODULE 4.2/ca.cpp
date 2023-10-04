#include <iostream>
using namespace std;

class Calculator 
{
public:
    int num1, num2;

public:
    Calculator(int n1, int n2) 
	{
    	
        num1 = n1;
        num2 = n2;
    }

    int add() 
	{
        return num1 + num2;
    }

    int subtract() 
	{
        return num2 - num1;
    }

    int multiply()
	 {
    	
        return num1 * num2;
     }

    float divide() 
	 {
        if (num2 != 0) 
   	{
            return static_cast<float>(num1) / num2;
    } else
	
    {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
   }
    }
};

    int main()
	{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Calculator calc(num1, num2);

    cout << "Sum: " << calc.add() << endl;
    cout << "subtract: " << calc.subtract() << endl;
    cout << "multiply: " << calc.multiply() << endl;
    cout << "divide: " << calc.divide() << endl;

    return 0;
}
