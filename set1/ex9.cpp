#include <iostream>

int readNumbers(void)
{
    int Numbers[3];
    int Sum = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Please enter Number " << i << " : ";
        std::cin >> Numbers[i];
        Sum += Numbers[i];
    }
    return (Sum);
}

void printSumOfNumbers(int Sum)
{
    std::cout << "Sum = " << Sum << std::endl;
}

int main(void)
{
    printSumOfNumbers(readNumbers());
    return (0);
}
