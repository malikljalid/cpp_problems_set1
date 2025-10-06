#include <iostream>

int readDay(void)
{
    int Day;

    std::cout << "Please enter a day (Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7) :";
    std::cin >> Day;

    return (Day - 1); // reduce 1 : to much days names array index
}

void printDayName(int Day)
{
    std::string Days[7] = { "Monday", "Tuesday", "Wedensday", "Thursday", "Friday", "Saturday", "Sunday" };

    std::cout << "it's" << Days[Day] << std::endl;
}

int main(void)
{
    printDayName(readDay());
    return (0);
}
