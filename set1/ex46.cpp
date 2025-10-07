#include <iostream>

enum enASCII {A = 65, Z = 90};

void printAlphabetFromAToZ(void)
{
    for (int i = A; i <= Z; i++)
    {
        std::cout << char(i) << '\n';
    }
}

int main(void)
{
    printAlphabetFromAToZ();
    return (0);
}
