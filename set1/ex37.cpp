#include <iostream>

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

int readUntil_99(void)
{
    int Sum    = 0;
    int Number = readNumber();

    while (Number != -99)
    {
        Sum += Number;
        Number = readNumber();
    }

    return (Sum);
}

void printSumOfNumbers(int Sum)
{
    std::cout << "Sum of Numbers = " << Sum << std::endl;
}

int main(void)
{
    printSumOfNumbers(readUntil_99());
    return (0);
}
