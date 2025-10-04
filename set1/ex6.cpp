#include <iostream>

struct stName
{
    std::string FirstName;
    std::string LastName;
};

std::string readName(void)
{
    stName Name;

    std::cout << "Please enter your First Name : ";
    std::cin >> Name.FirstName;

    std::cout << "Please enter your Last Name : ";
    std::cin >> Name.LastName;

    return (Name.FirstName + ' ' + Name.LastName);
}

void printName(std::string Name)
{
    std::cout << "Your Name is : " << Name << std::endl;
}

int main(void)
{
    printName(readName());
    return (0);
}
