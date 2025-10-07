#include <iostream>

int readMonth(void)
{
    int Month;

    do
    {
        std::cout << "Please enter a Month Number : ";
        std::cin >> Month;
    }
    while (Month < 1 || Month > 12);

    return (Month - 1); // reduce 1 : to much months names array index
}

void printMonthName(int Month)
{
    std::string Months[12] = { "Junary", "February", "March", "April", "Mai", "June", "July", "Agusut", "September", "October", "November", "December" };

    std::cout << "it's " << Months[Month] << std::endl;
}

int main(void)
{
    printMonthName(readMonth());
    return (0);
}
