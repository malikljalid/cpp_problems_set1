#include <iostream>

struct stNumber
{
    int Number;
    int Power;
    int Result;
};

int powerOf(int Number, int Power)
{
    int Result = 1;

    for (int i = 1; i <= Power; i++)
    {
        Result *= Number;
    }
    return (Result);
}

stNumber readNumber(void)
{
    stNumber Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number.Number;

    std::cout << "Please enter a power  : ";
    std::cin >> Number.Power;

    Number.Result = powerOf(Number.Number, Number.Power);

    return (Number);
}

void printNumberPower(stNumber Number)
{
    std::cout << Number.Number << "^" << Number.Power << " = " << Number.Result << std::endl;
}

int main(void)
{
    printNumberPower(readNumber());
    return (0);
}
