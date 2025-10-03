#include <iostream>
#include <string>

std::string readName(void)
{
    std::string Name;

    std::cout << "Please enter your name : ";
    getline(std::cin, Name);

    return (Name);
}

void printYourName(std::string Name)
{
    std::cout << "Your Name : " << Name << std::endl;
}

int main(void)
{
    printYourName(readName());
    return (0);
}
