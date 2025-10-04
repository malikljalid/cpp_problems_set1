#include <iostream>

struct stHuman
{
    int     Age;
    bool    ValidityOfAge;
};

bool checkHumanAge(int Age)
{
    if (Age >= 18 && Age <= 45)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}

stHuman readHumanAge(void)
{
    stHuman Human;

    std::cout << "Please enter your age : ";
    std::cin >> Human.Age;

    Human.ValidityOfAge = checkHumanAge(Human.Age);

    return (Human);
}

void printHumanValidityOfAge(bool ValidityOfAge)
{
    if (ValidityOfAge == true)
    {
        std::cout << "Your Age : VALID\n";
    }
    else
    {
        std::cout << "Your Age : InVALID\n";
    }
}

int main(void)
{
    printHumanValidityOfAge(readHumanAge().ValidityOfAge);
    return (0);
}
