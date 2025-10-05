#include <iostream>

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

int factorial(int Number)
{
    int Factorial = 1;

    for (int i = 1; i <= Number; i++)
    {
        Factorial *= i;
    }
    return (Factorial);
}

void printFactorialOf(int Number)
{
    std::cout << Number << "! = " << factorial(Number) << std::endl;
}

int main(void)
{
    printFactorialOf(readNumber());
    return (0);
}
