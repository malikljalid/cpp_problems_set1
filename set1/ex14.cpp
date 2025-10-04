#include <iostream>

void readTwoNumbers(int &N1, int &N2)
{
    std::cout << "Please enter Number 1 : ";
    std::cin >> N1;

    std::cout << "Please enter Number 2 : ";
    std::cin >> N2;
}

void swapTwoNumbers(int &N1, int &N2)
{
    int tmp;

    tmp = N1;
    N1  = N2;
    N2  = tmp;

    std::cout << "-- SWAP --\n";
}

void printTwoNumbers(int N1, int N2)
{
    std::cout << "Number 1 = " << N1 << "\n";
    std::cout << "Number 2 = " << N2 << "\n\n";
}

int main(void)
{
    int Number1;
    int Number2;

    readTwoNumbers(Number1, Number2);
    printTwoNumbers(Number1, Number2);

    swapTwoNumbers(Number1, Number2);
    printTwoNumbers(Number1, Number2);

    return (0);
}
