#include <iostream>
using namespace std;

class calc {
public:
    float add(float a, float b);
    float sub(float a, float b);
    float multiply(float a, float b);
    float power(float a, float b);
    float divide(float a, float b);
};


float calc::add(float a, float b) {
    float result;
    result = a + b;
    return result;
}


float calc::sub(float a, float b) {
    float result;
    result = a - b;
    return result;
}


float calc::multiply(float a, float b) {
    float result = 0;

    for(int i = 1; i <= b; i++) {
        result = result + a;
    }

    return result;
}

float calc::power(float base, float exp) {
    float result = 1;

    for(int i = 1; i <= exp; i++) {
        result = result * base;
    }

    return result;
}

float calc::divide(float a, float b) {
    float result;
    if(b == 0) {
        cout << "Error: division by zero!" << endl;
        return 0;
    }
    result = a / b;
    return result;
}

int main() {
    calc calculator;

    float num1, num2;
    char symbol;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter symbol (+, -, *, /, ^): ";
    cin >> symbol;

    if(symbol == '+') {
        cout << calculator.add(num1, num2);
    }
    else if(symbol == '-') {
        cout << calculator.sub(num1, num2);
    }
    else if(symbol == '*') {
        cout << calculator.multiply(num1, num2);
    }
    else if(symbol == '/') {
        cout << calculator.divide(num1, num2);
    }
    else if(symbol == '^') {
        cout << calculator.power(num1, num2);
    }
    else {
        string yes;
        int number1, number2;
        int total;
        cout << "Invalid symbol";
        cout << endl;
        cout << "if you would like to use Modulation, write yes "<< endl;
        cin >> yes;
        if (yes == "yes" || yes == "Yes"|| yes == "yEs" || yes == "yeS" || yes == "YES"){
           cout <<"Enter number: ";
           cin>> number1 >> number2;
           total = number1%number2;
           cout << "final result is "<< total << endl;
        }
        else{
           cout << "Invalid symbol"<< endl;
        }
           
    }

    return 0;
}