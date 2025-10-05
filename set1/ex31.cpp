#include <iostream>

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

int powerOf_2_3_4(int Number, int Power)
{
    switch (Power)
    {
        case (2) :
            return (Number * Number);
        case (3) :
            return (Number * Number * Number);
        case (4) :
            return (Number * Number * Number * Number);
        default :
            return (-1);
    }
}

void printPowerOfNumber(int Number)
{
    std::cout << Number << "^2 = " << powerOf_2_3_4(Number, 2) << '\n';
    std::cout << Number << "^3 = " << powerOf_2_3_4(Number, 3) << '\n';
    std::cout << Number << "^4 = " << powerOf_2_3_4(Number, 4) << '\n';
}

int main(void)
{
    printPowerOfNumber(readNumber());
    return (0);
}
