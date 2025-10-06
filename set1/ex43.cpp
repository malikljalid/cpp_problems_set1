#include <iostream>

enum enSecondsIn { DAY=24*60*60, HOUR=60*60, MINUTE=60 };

struct stDuration
{
    int Days;
    int Hours;
    int Minutes;
    int Seconds;
};

int readDurationInSeconds(void)
{
    int TotalInSeconds;

    std::cout << "Please enter Total Duration in Seconds : ";
    std::cin >> TotalInSeconds;

    return (TotalInSeconds);
}

stDuration convertDurationToDHMS(int TotalInSeconds)
{
    stDuration Duration;
    int        Remainder;

    Duration.Days  = TotalInSeconds / enSecondsIn::DAY;
    Remainder      = TotalInSeconds % enSecondsIn::DAY;

    Duration.Hours = Remainder / enSecondsIn::HOUR;
    Remainder      = Remainder % enSecondsIn::HOUR;

    Duration.Minutes = Remainder / enSecondsIn::MINUTE;
    Duration.Seconds = Remainder % enSecondsIn::MINUTE;

    return (Duration);
}

void printDurationInDHMS(stDuration Duration)
{
    std::cout << Duration.Days << ':' << Duration.Hours << ':' << Duration.Minutes << ':' << Duration.Seconds << '\n';
}

int main(void)
{
    printDurationInDHMS(convertDurationToDHMS(readDurationInSeconds()));
    return (0);
}
