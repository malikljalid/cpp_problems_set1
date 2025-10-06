#include <iostream>

int readNumberOfHours(void)
{
    int Hours;

    std::cout << "Please enter number of Hours : ";
    std::cin >> Hours;

    return (Hours);
}

int convertHoursToDays(int Hours)
{
    return (Hours / 24);
}

int convertHoursToWeeks(int Hours)
{
    return (Hours / (24 * 7));
}

int convertDaysToWeeks(int Days)
{
    return (Days / 7);
}

void printWeeksAndDays(int Hours)
{
    int Days  = convertHoursToDays(Hours);
    int Weeks = convertDaysToWeeks(Days);

    std::cout << Hours << " Hours" << " = " << Days << " Days\n";
    std::cout << Hours << " Hours" << " = " << Weeks << " Weeks\n";
}

int main(void)
{
    printWeeksAndDays(readNumberOfHours());
    return (0);
}
