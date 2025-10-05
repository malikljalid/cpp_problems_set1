#include <iostream>

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

int getSumOfOddNumbersFromTo(int From, int To)
{
    int OddSum = 0;

    for (int Number = From; Number <= To; Number++)
    {
        if (Number % 2 != 0)
        {
            OddSum += Number;
        }
    }
    return (OddSum);
}

void printSumOddNumbers(int Sum)
{
    std::cout << "Sum of Odd numbers is : " << Sum << std::endl;
} 

int main(void)
{
    printSumOddNumbers(getSumOfOddNumbersFromTo(1, readNumber()));   
    return (0);
}
