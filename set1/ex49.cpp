#include <iostream>

enum enUser     { BALANCE=7500, PIN=1234 };
enum enColor    { RED=31, GREEN=32 };

int readUserATM(void)
{
    int ATM;

    std::cout << "Please enter your ATM Code : ";
    std::cin >> ATM;

    return (ATM);
}

bool userATMisNotCorrect(int ATM)
{
    return (ATM != enUser::PIN);
}

void textToColor(std::string Msg, int textColor)
{
    std::cout << "\033[" << textColor << "m"; // sets console to textColor
    std::cout << Msg << ' ';
    std::cout << "\033[0m\n"; // reset console color
}

void printUserBalance(void)
{
    int userATM = readUserATM();

    while (userATMisNotCorrect(userATM) == true)
    {
        textToColor("Wrong PIN !\n", RED);
        userATM = readUserATM();
    }
    textToColor("Your Balance : $" + std::to_string(enUser::BALANCE), GREEN);
}

int main(void)
{
    printUserBalance();
    return (0);
}
