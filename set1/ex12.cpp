#include <iostream>

int maxBetween(int N1, int N2)
{
    if (N1 > N2)
    {
        return (N1);
    }
    else
    {
        return (N2);
    }
}

int readTwoNumbers(void)
{
    int N1, N2;

    std::cout << "Please enter Number 1 : ";
    std::cin >> N1;

    std::cout << "Please enter Number 2 : ";
    std::cin >> N2;

    return (maxBetween(N1, N2));
}

void printMaxBetween(int Max)
{
    std::cout << "Max Number is : " << Max << std::endl;
}

int main(void)
{
    printMaxBetween(readTwoNumbers());
    return (0);
}
