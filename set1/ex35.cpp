#include <iostream>

enum enMoneyValue    { PENNIES=1, NICKLS=5, DIMS=10, QUARTERS=25, DOLLARS=100 };
enum enMoneyType     { PENNY, NICKL, DIM, QUARTER, DOLLAR };

struct stMoney
{
    int     Money[5];
    int     TotalInPennies;
    float   TotalInDollars;
};

stMoney readMoney(void)
{
    stMoney         Money;
    int             TotalMoney = 0;
    std::string     TypeNames[5] = { "Pennies ", "Nickls  ", "Dims    ", "Quarters", "Dollars " };
    int             TypeValue[5] = { PENNIES, NICKLS, DIMS, QUARTERS, DOLLARS };

    for (int Type = 0; Type < 5; Type++)
    {
        std::cout << TypeNames[Type] << " : ";
        std::cin >> Money.Money[Type];

        TotalMoney += Money.Money[Type] * TypeValue[Type];
    }

    Money.TotalInPennies = TotalMoney;
    Money.TotalInDollars = TotalMoney / 100;

    return (Money);
}

void printMoneyTotal(stMoney Money)
{
    std::cout << "\nTotal in Pennies : " << Money.TotalInPennies << '\n';
    std::cout << "Total in Dollars : " << Money.TotalInDollars << '\n';
}

int main(void)
{
    printMoneyTotal(readMoney());
    return (0);
}
