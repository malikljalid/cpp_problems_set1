#include <iostream>

enum enUser     { BALANCE=7500, PIN=1234 };
enum enColor    { RED=31, GREEN=32, YELLOW=33 };

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

bool userATMisCorrect(int ATM)
{
    return (ATM == enUser::PIN);
}

void textToColor(std::string Msg, int textColor)
{
    std::cout << "\033[" << textColor << "m"; // sets console to textColor
    std::cout << Msg << ' ';
    std::cout << "\033[0m\n"; // reset console color
}

void login(void)
{
    int userATM = readUserATM();
    int attemps = 2;

    while (userATMisNotCorrect(userATM) == true && attemps > 0)
    {
        textToColor("Wrong PIN !\n", RED);
        userATM = readUserATM();
        attemps--;
    }
    if (userATMisCorrect(userATM))
        textToColor("Your Balance : $" + std::to_string(enUser::BALANCE), GREEN);
    else
        textToColor("Your Card is LOCKED!", YELLOW);
}

int main(void)
{
    login();
    return (0);
}
