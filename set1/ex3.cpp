#include <iostream>

enum enNumberType { EVEN, ODD };

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

enNumberType getNumberType(int Number)
{
    if (Number % 2 == 0)
    {
        return (enNumberType::EVEN);
    }
    else
    {
        return (enNumberType::ODD);
    }
}

void printNumberType(enNumberType NumberType)
{
    if (NumberType == EVEN)
    {
        std::cout << "Number is EVEN\n";
    }
    else
    {
        std::cout << "Number is ODD\n";
    }
}

int main(void)
{
    printNumberType(getNumberType(readNumber()));
    return (0);
}
