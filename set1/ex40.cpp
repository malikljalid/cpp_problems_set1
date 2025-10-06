#include <iostream>

int readNumber(void)
{
    int BillValue;

    std::cout << "Please enter your Bill Value : ";
    std::cin >> BillValue;

    return (BillValue);
}

float getTotalBill(int BillValue)
{
    float TotalBill;

    TotalBill = BillValue * 1.10; // add 10% service charge
    TotalBill = BillValue * 1.16; // add 16% tax charge

    return (TotalBill);
}

void printTotalBill(float TotalBill)
{
    std::cout << "Your Total Bill : " << TotalBill << std::endl;
}

int main(void)
{
    printTotalBill(getTotalBill(readNumber()));
    return (0);
}
