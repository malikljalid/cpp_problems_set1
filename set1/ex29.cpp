#include <iostream>

bool numberIsEven(int Number)
{
    return (Number % 2 == 0);
}

int readNumber(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    return (Number);
}

int getSumOfEvenNumbersFromTo(int From, int To)
{
    int OddSum = 0;
    
    for (int Number = From; Number <= To; Number++)
    {
        if (numberIsEven(Number) == true)
        {
            OddSum += Number;
        }
    }
    return (OddSum);
}

void printSumEvenNumbers(int Sum)
{
    std::cout << "Sum of Even numbers is : " << Sum << std::endl;
} 

int main(void)
{
    printSumEvenNumbers(getSumOfEvenNumbersFromTo(1, readNumber()));   
    return (0);
}
