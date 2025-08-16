#include <iostream>
// #include <cctype>

using namespace std;

void sum(int num1, int num2){
    cout << "The sum of the numbers is: " << num1 + num2 << endl;
}

void subtract(int num1, int num2){
    cout << "The result of the substraction is: " << num1 - num2 << endl;
}

void multiply(int num1, int num2){
    cout << "The product of the numbers is: " << num1 * num2 << endl;
}

void divide(int num1, int num2){
    if(num2 == 0){
        cout << "Division by Zero is undefined or not allowed" << endl;
        return;
    }
    double ans = (num1 + 0.0) / num2;
    cout << "The result of the division is: " << ans << endl;
}

void remainder(int num1, int num2){
    if(num2 == 0){
        cout << "Division by Zero is undefined or not allowed" << endl;
        return;
    }
    cout << "The remainder of the division is: " << num1 % num2 << endl;
}

bool checkOP(char op, int num1, int num2){
    switch (op)
    {
    case '+':
        // add func
        sum(num1, num2);
        break;
    case '-':
        // minus func
        subtract(num1, num2);
        break;
    case '*':
        // multiply func;
        multiply(num1, num2);
        break;
    case 'x':
        // multiply func;
        multiply(num1, num2);
        break;
    case '/':
        // division func
        divide(num1, num2);
        break;
    case '%':
        // remainder func
        remainder(num1, num2);
        break;
    default:
        cout << "invalid operator '" << op << "'" << endl 
             << "these are the valid ones (*, +, -, /, %, x)" << endl;
        return false;
    }
    
    return true;
}


int main()
{
    int num1 = 0;
    int num2 = 0;
    char op;
    bool valid = false;

    
    while(!valid){
        cout << "Enter calculation (e.g. 4 + 5): ";

        cin >> num1;

        cin >> op;

        op = tolower(op);

        cin >> num2;

        valid = checkOP(op, num1, num2);
    }
}