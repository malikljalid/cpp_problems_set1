#include <iostream>

enum enOperator { ADD='+', SUB='-', MUL='*', DIV='/', MOD='%' }; // just note : we can assign ascii charcter direclty to an enum an implicility convert it to ascii integer

struct stMathOperation
{
    int     Number1;
    int     Number2;
    char    Operator;
};

stMathOperation readOperation(void)
{
    stMathOperation Operation;

    std::cout << "Please enter Number 1 : ";
    std::cin >> Operation.Number1;

    std::cout << "Please enter Number 2 : ";
    std::cin >> Operation.Number2;

    do
    {
        std::cout << "Please enter Operator : ";
        std::cin >> Operation.Operator;
    }
    while (Operation.Operator != '+' && Operation.Operator != '-' &&
           Operation.Operator != '*' && Operation.Operator != '/' &&
           Operation.Operator != '%');
    
    return (Operation);
}

float CalculateOperation(stMathOperation Operation)
{
    switch (Operation.Operator)
    {
        case ('+') :
            return (Operation.Number1 + Operation.Number2);
        case ('-') :
            return (Operation.Number1 - Operation.Number2);
        case ('*') :
            return (Operation.Number1 * Operation.Number2);
        case ('/') :
            return (Operation.Number1 / (float)Operation.Number2);
        case ('%') :
            return (Operation.Number1 % Operation.Number2);
        default :
            return (0);
    }
}

void printOperationResult(stMathOperation Operation)
{
    std::cout << Operation.Number1 << Operation.Operator << Operation.Number2 << " = ";
    std::cout << CalculateOperation(Operation) << std::endl;
}

int main(void)
{
    printOperationResult(readOperation());
    return (0);
}
