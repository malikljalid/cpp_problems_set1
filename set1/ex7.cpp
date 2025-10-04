#include <iostream>

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

float getHalfOfNumber(int Number)
{
    return (Number / (float)2);
}

void printHalfOfNumber(int Number)
{
    std::cout << "Half of " << Number << " is : " << getHalfOfNumber(Number) << std::endl;
}

int main(void)
{
    printHalfOfNumber(readNumber());
    return (0);
}
