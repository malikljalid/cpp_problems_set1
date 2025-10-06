#include <iostream>

enum enSecondsIn { DAY=24*60*60, HOUR=60*60, MINUTE=60 };

int readDays(void)
{
    int Days;

    std::cout << "Please enter Days : ";
    std::cin >> Days;

    return (Days);
}

int readHours(void)
{
    int Hours;

    std::cout << "Please enter Hours : ";
    std::cin >> Hours;

    return (Hours);
}

int readMinutes(void)
{
    int Minutes;

    std::cout << "Please enter Minutes : ";
    std::cin >> Minutes;

    return (Minutes);
}

int readSeconds(void)
{
    int Seconds;

    std::cout << "Please enter Seconds : ";
    std::cin >> Seconds;

    return (Seconds);
}

int getDurationInSeconds(int Days, int Hours, int Minutes, int Seconds)
{
    int DaysToSeconds    = Days * enSecondsIn::DAY;
    int HoursToSeconds   = Hours * enSecondsIn::HOUR;
    int MinutesToSeconds = Minutes * enSecondsIn::MINUTE;

    return (DaysToSeconds + HoursToSeconds + MinutesToSeconds + Seconds);
}

void printDurationInSeconds(int Days, int Hours, int Minutes, int Seconds)
{
    int TotalSeconds = getDurationInSeconds(Days, Hours, Minutes, Seconds);

    std::cout << "Total in Seconds : " << TotalSeconds << 's' << std::endl;
}

int main(void)
{
    printDurationInSeconds(readDays(), readHours(), readMinutes(), readSeconds());
    return (0);
}
