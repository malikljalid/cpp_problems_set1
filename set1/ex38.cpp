#include <iostream>
#include <string>
#include <cmath>

enum enColor { GREEN = 32 };

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

bool numberIsDevidedBy(int Number, int Devider)
{
    return (Number % Devider == 0);
}

bool checkIfNumberIsPrime(int Number)
{
    float STOP = sqrt(Number);

    for (int i = 2; i <= STOP; i++)
    {
        if (numberIsDevidedBy(Number, i))
        {
            return (false);
        }
    }
    return (true);
}

bool numberIsPrime(int Number)
{
    if (Number < 2)
        return (false);
    else
        return (checkIfNumberIsPrime(Number));
}

void printIfNumberIsPrime(int Number)
{
    if (numberIsPrime(Number))
        std::cout << Number << " is prime \n";
    else
        std::cout << Number << " is not prime \n";
}

void ResetColor()
{
    std::cout << "\033[0m";
}

void SetColor(int textColor)
{
    std::cout << "\033[" << textColor << "m";
}

void textToGreen(int Number)
{
    SetColor(GREEN);
    std::cout << Number << ' ';
    ResetColor();
}

void primeNumber_UnitTest(void)
{
    std::cout << "Table of Prime Numbers from 1 to 100 : \n\n";
    for (int i = 1; i < 100; i++)
    {
        if (i < 10)
            std::cout << ' ';

        if (numberIsPrime(i))
            textToGreen(i);
        else
            std::cout << i << ' ';
        
        if (i % 10 == 0)
            std::cout << '\n';
    }
    std::cout << std::endl;
}

int main(void)
{
    // printIfNumberIsPrime(readNumber());
    primeNumber_UnitTest();
    return (0);
}
