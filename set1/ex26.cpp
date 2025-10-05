#include <iostream>

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

void printNumbersFromTo(int From, int To)
{
    for (int i = From; i <= To; i++)
    {
        std::cout << i << '\n';
    }
}

int main(void)
{
    printNumbersFromTo(1, readNumber());
    return (0);
}
