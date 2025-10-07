#include <iostream>
#include <cmath>

int readLeanAmount(void)
{
    int LeanAmount;

    std::cout << "Please enter your Lean Amount : ";
    std::cin >> LeanAmount;

    return (LeanAmount);
}

int readMonthlyPayement(void)
{
    int MonthlyPayement;

    std::cout << "Please enter your Monthly Payement : ";
    std::cin >> MonthlyPayement;

    return (MonthlyPayement);
}

float getMonthsToSettleLean(int MonthlyPayement, int LeanAmount)
{
    return (LeanAmount / (float)MonthlyPayement);
}

void printMonthsToSettleLean(float MonthsToSettle)
{
    std::cout << "The months you need to settle this amount is : " << round(MonthsToSettle) << " Months\n";
}

int main(void)
{
    printMonthsToSettleLean(getMonthsToSettleLean(readMonthlyPayement(), readLeanAmount()));
    return (0);
}
