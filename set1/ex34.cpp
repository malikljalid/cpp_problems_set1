#include <iostream>

int readBuyerSales(void)
{
    float TotalSales;

    std::cout << "Please enter your Total Sales : ";
    std::cin >> TotalSales;

    return (TotalSales);
}

float getBuyerCommission(int TotalSales)
{
    if (TotalSales > 1000000)
    {
        return (TotalSales * 0.01);
    }
    else if (TotalSales > 500000)
    {
        return (TotalSales * 0.02);
    }
    else if (TotalSales > 100000)
    {
        return (TotalSales * 0.03);
    }
    else if (TotalSales > 50000)
    {
        return (TotalSales * 0.04);
    }
    else
    {
        return (TotalSales * 0.00);
    }
}

void printBuyerCommission(int Commission)
{
    std::cout << "Your Commission is : " << Commission << std::endl;
}

int main(void)
{
    printBuyerCommission(getBuyerCommission(readBuyerSales()));
    return (0);
}
