#include <iostream>

struct stHuman
{
    int     Age;
    bool    ValidityOfAge;
};

bool checkHumanAgeInRang(int Age, int From, int To)
{
    return (Age >= From && Age <= To);
}

stHuman readHumanAge(void)
{
    stHuman Human;

    std::cout << "Please enter your age : ";
    std::cin >> Human.Age;

    Human.ValidityOfAge = checkHumanAgeInRang(Human.Age, 18, 45);

    return (Human);
}

stHuman readHumanUntilValid(void)
{
    stHuman Human = readHumanAge();

    while (Human.ValidityOfAge == false)
    {
        std::cout << "Invalid Age!\n";
        Human = readHumanAge();
    }

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
    printHumanValidityOfAge(readHumanUntilValid().ValidityOfAge);
    return (0);
}
