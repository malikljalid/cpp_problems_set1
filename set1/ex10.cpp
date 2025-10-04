#include <iostream>

float readNumbers(void)
{
    int Numbers[3];
    int Sum = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Please enter Number " << i << " : ";
        std::cin >> Numbers[i];
        Sum += Numbers[i];
    }
    return (Sum / (float)3);
}

void printAverageOfNumbers(int Sum)
{
    std::cout << "Average = " << Sum << std::endl;
}

int main(void)
{
    printAverageOfNumbers(readNumbers());
    return (0);
}
