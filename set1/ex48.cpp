#include <iostream>
#include <cmath>

int readLeanAmount(void)
{
    int LeanAmount;

    std::cout << "Please enter your Lean Amount : ";
    std::cin >> LeanAmount;

    return (LeanAmount);
}

int readMonthsToSettle(void)
{
    int Months;

    std::cout << "Please enter How many months you want to pay it in : ";
    std::cin >> Months;

    return (Months);
}

float getMonthlyPayementToSettleLean(int MonthsToSettleLean, int LeanAmount)
{
    return (LeanAmount / (float)MonthsToSettleLean);
}

void printMonthsToSettleLean(float MonthlyPayement)
{
    std::cout << "You will pay : $" << round(MonthlyPayement) << " Per Month\n";
}

int main(void)
{
    printMonthsToSettleLean(getMonthlyPayementToSettleLean(readMonthsToSettle(), readLeanAmount()));
    return (0);
}
