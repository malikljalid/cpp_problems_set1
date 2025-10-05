#include <iostream>

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

void printNumbersFromToReverse(int From, int To)
{
    for (int i = From; i >= To; i--)
    {
        std::cout << i << '\n';
    }
}

int main(void)
{
    printNumbersFromToReverse(readNumber(), 1);
    return (0);
}
