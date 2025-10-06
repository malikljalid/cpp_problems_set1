#include <iostream>

struct stBuyer
{
    int TotalBill;
    int CashPaid;
};

stBuyer readBuyer(void)
{
    stBuyer Buyer;

    std::cout << "Please enter your Total Bill : ";
    std::cin >> Buyer.TotalBill;

    std::cout << "Please enter your Cash Paid : ";
    std::cin >> Buyer.CashPaid;

    return (Buyer);
}

int getBuyerReminder(stBuyer Buyer)
{
    return (Buyer.CashPaid - Buyer.TotalBill);
}

void printBuyerReminder(int Reminder)
{
    std::cout << "Your reminder : " << Reminder << "$\n";
}

int main(void)
{
    printBuyerReminder(getBuyerReminder(readBuyer()));
    return (0);
}
